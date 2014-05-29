#include "skeletization.h"

namespace Algorithms
{
    Skeletization::Skeletization()
    {
        threshold = 35;
        foreground.create(480,640,CV_8U);
        roi = new cv::Rect(1,1,630,312);
    }

    void Skeletization::setBackground(cv::Mat& back)
    {
         back.copyTo(this->background);
    }

    void Skeletization::getForeground(cv::Mat& curr)
    {
          for (int i=1;i<background.rows-1;i++)
          {
              for (int j=1;j<background.cols-1;j++)
              {

                  if (abs((int)background.at<cv::Vec3b>(i,j)[0]-(int)curr.at<cv::Vec3b>(i,j)[0])>threshold ||
                      abs((int)background.at<cv::Vec3b>(i,j)[1]-(int)curr.at<cv::Vec3b>(i,j)[1])>threshold ||
                      abs((int)background.at<cv::Vec3b>(i,j)[2]-(int)curr.at<cv::Vec3b>(i,j)[2])>threshold
                      )
                  {
                      foreground.at<unsigned char>(i,j) = 255;

                  }
                  else
                  {
                     foreground.at<unsigned char>(i,j) = 0;
                  }

              }
          }

          for (int i=0;i<5;i++)
            cv::erode(foreground,foreground,cv::Mat());

          for (int i=0;i<7;i++)
            cv::dilate(foreground,foreground,cv::Mat());

    }

    void Skeletization::thinningIteration(cv::Mat &im, int iter)
    {
        cv::Mat marker = cv::Mat::zeros(im.size(), CV_8UC1);

        for (int i = 1; i < im.rows-1; i++)
        {
            for (int j = 1; j < im.cols-1; j++)
            {
                uchar p2 = im.at<uchar>(i-1, j);
                uchar p3 = im.at<uchar>(i-1, j+1);
                uchar p4 = im.at<uchar>(i, j+1);
                uchar p5 = im.at<uchar>(i+1, j+1);

                uchar p6 = im.at<uchar>(i+1, j);
                uchar p7 = im.at<uchar>(i+1, j-1);
                uchar p8 = im.at<uchar>(i, j-1);
                uchar p9 = im.at<uchar>(i-1, j-1);

                int A  = (p2 == 0 && p3 == 1) + (p3 == 0 && p4 == 1) +
                         (p4 == 0 && p5 == 1) + (p5 == 0 && p6 == 1) +
                         (p6 == 0 && p7 == 1) + (p7 == 0 && p8 == 1) +
                         (p8 == 0 && p9 == 1) + (p9 == 0 && p2 == 1);
                int B  = p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9;
                int m1 = iter == 0 ? (p2 * p4 * p6) : (p2 * p4 * p8);
                int m2 = iter == 0 ? (p4 * p6 * p8) : (p2 * p6 * p8);

                if (A == 1 && (B >= 2 && B <= 6) && m1 == 0 && m2 == 0)
                    marker.at<uchar>(i,j) = 1;
            }
        }

        im &= ~marker;
    }

    cv::Mat Skeletization::getSkeleton()
    {
        skeleton = foreground(*roi);
        cv::resize(skeleton,skeleton,cv::Size(315,156));
        skeleton /= 255;

        cv::Mat prev = cv::Mat::zeros(skeleton.size(), CV_8UC1);
        cv::Mat diff;

        do {
            thinningIteration(skeleton, 0);
            thinningIteration(skeleton, 1);
            cv::absdiff(skeleton, prev, diff);
            skeleton.copyTo(prev);
        }
        while (cv::countNonZero(diff) > 0);

        skeleton *= 255;


        return skeleton;


    }
}
