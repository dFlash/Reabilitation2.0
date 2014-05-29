#include "tracking.h"

namespace Algorithms
{
    Tracking::Tracking()
    {
        moveL[0][0] = 1;
        moveL[0][1] = -1;
        moveL[1][0] = 1;
        moveL[1][1] = 0;
        moveL[2][0] = 1;
        moveL[2][1] = 1;
        moveL[3][0] = 0;
        moveL[3][1] = 1;
        moveL[4][0] = -1;
        moveL[4][1] = 1;
        moveL[5][0] =-1;
        moveL[5][1] = 0;
        moveL[6][0] =-1;
        moveL[6][1] =-1;
        moveL[7][0] = 0;
        moveL[7][1] = -1;

        moveR[0][0] =1;
        moveR[0][1] =1;
        moveR[1][0] =1;
        moveR[1][1] =0;
        moveR[2][0] =1;
        moveR[2][1] =-1;
        moveR[3][0] =0;
        moveR[3][1] =-1;
        moveR[4][0] =-1;
        moveR[4][1] =-1;
        moveR[5][0] =-1;
        moveR[5][1] =0;
        moveR[6][0] =-1;
        moveR[6][1] =1;
        moveR[7][0] =0;
        moveR[7][1] =1;

        step = 25;

        dataOfFeatures.setPosLH(cv::Point2i(26,87));
        dataOfFeatures.setPosRH(cv::Point2i(217,65));
        dataOfFeatures.setPosLE(cv::Point2i(74,106));
        dataOfFeatures.setPosRE(cv::Point2i(185,98));
        dataOfFeatures.setLeftSize(0);
        dataOfFeatures.setRightSize(0);

        leftSize=0;
        rightSize=0;
    }


    void Tracking::init(cv::Mat &firstFrame)
    {

        //левая ладонь

        for(int i = dataOfFeatures.getPosLH().y-step; i < dataOfFeatures.getPosLH().y+step; i++)
        {
            for(int j = dataOfFeatures.getPosLH().x-step; j < dataOfFeatures.getPosLH().x+step; j++)
            {
                if (firstFrame.at<uchar>(i,j)!=255)
                {
                    continue;
                }
                else
                {
                    uchar p2 = firstFrame.at<uchar>(i-1, j);
                    uchar p3 = firstFrame.at<uchar>(i-1, j+1);
                    uchar p4 = firstFrame.at<uchar>(i, j+1);
                    uchar p5 = firstFrame.at<uchar>(i+1, j+1);

                    uchar p6 = firstFrame.at<uchar>(i+1, j);
                    uchar p7 = firstFrame.at<uchar>(i+1, j-1);
                    uchar p8 = firstFrame.at<uchar>(i, j-1);
                    uchar p9 = firstFrame.at<uchar>(i-1, j-1);

                    if ((p2+p3+p4+p5+p6+p7+p8+p9)==255)
                    {
                        dataOfFeatures.setPosLH(cv::Point2i(j,i));
                        break;
                    }
                }
            }
        }

        //правая ладонь

        for(int i = dataOfFeatures.getPosRH().y-step; i < dataOfFeatures.getPosRH().y+step; i++)
        {
            for(int j = dataOfFeatures.getPosRH().x-step; j < dataOfFeatures.getPosRH().x+step; j++)
            {
                if (firstFrame.at<uchar>(i,j)!=255)
                {
                    continue;
                }
                else
                {
                    uchar p2 = firstFrame.at<uchar>(i-1, j);
                    uchar p3 = firstFrame.at<uchar>(i-1, j+1);
                    uchar p4 = firstFrame.at<uchar>(i, j+1);
                    uchar p5 = firstFrame.at<uchar>(i+1, j+1);

                    uchar p6 = firstFrame.at<uchar>(i+1, j);
                    uchar p7 = firstFrame.at<uchar>(i+1, j-1);
                    uchar p8 = firstFrame.at<uchar>(i, j-1);
                    uchar p9 = firstFrame.at<uchar>(i-1, j-1);

                    if ((p2+p3+p4+p5+p6+p7+p8+p9)==255)
                    {
                        dataOfFeatures.setPosRH(cv::Point2i(j,i));
                        break;
                    }
                }
            }
        }


        //левый локоть
        int elbowLeftX = 0, elbowLeftY = 0;
        for(int i = dataOfFeatures.getPosLE().y-step; i < dataOfFeatures.getPosLE().y+step; i++)
        {
            for(int j = dataOfFeatures.getPosLE().x-step; j < dataOfFeatures.getPosLE().x+step; j++)
            {
                if (firstFrame.at<uchar>(i,j)!=255)
                {
                    continue;
                }
                else
                {
                    if (i>elbowLeftY)
                    {
                        elbowLeftY=i;
                        elbowLeftX=j;
                    }
                }
            }
        }

        dataOfFeatures.setPosLE(cv::Point2i(elbowLeftX,elbowLeftY));


        //правый локоть
        int elbowRightX = 0, elbowRightY = 0;
        for(int i = dataOfFeatures.getPosRE().y-step; i < dataOfFeatures.getPosRE().y+step; i++)
        {
            for(int j = dataOfFeatures.getPosRE().x-step; j < dataOfFeatures.getPosRE().x+step; j++)
            {
                if (firstFrame.at<uchar>(i,j)!=255)
                {
                    continue;
                }
                else
                {
                    if (i>elbowRightY)
                    {
                        elbowRightY=i;
                        elbowRightX=j;
                    }
                }
            }
        }

        dataOfFeatures.setPosRE(cv::Point2i(elbowRightX,elbowRightY));

        getForearmSize(firstFrame,true);

    }

    Data Tracking::findFeaturePoints(cv::Mat &frame)
    {
        //левая ладонь

        for(int i = dataOfFeatures.getPosLH().y-step; i < dataOfFeatures.getPosLH().y+step; i++)
        {
            for(int j = dataOfFeatures.getPosLH().x-step; j < dataOfFeatures.getPosLH().x+step; j++)
            {
                if (frame.at<uchar>(i,j)!=255)
                {
                    continue;
                }
                else
                {
                    uchar p2 = frame.at<uchar>(i-1, j);
                    uchar p3 = frame.at<uchar>(i-1, j+1);
                    uchar p4 = frame.at<uchar>(i, j+1);
                    uchar p5 = frame.at<uchar>(i+1, j+1);

                    uchar p6 = frame.at<uchar>(i+1, j);
                    uchar p7 = frame.at<uchar>(i+1, j-1);
                    uchar p8 = frame.at<uchar>(i, j-1);
                    uchar p9 = frame.at<uchar>(i-1, j-1);

                    if ((p2+p3+p4+p5+p6+p7+p8+p9)==255)
                    {
                        dataOfFeatures.setPosLH(cv::Point2i(j,i));
                        break;
                    }
                }
            }
        }

        //правая ладонь

        for(int i = dataOfFeatures.getPosRH().y-step; i < dataOfFeatures.getPosRH().y+step; i++)
        {
            for(int j = dataOfFeatures.getPosRH().x-step; j < dataOfFeatures.getPosRH().x+step; j++)
            {
                if (frame.at<uchar>(i,j)!=255)
                {
                    continue;
                }
                else
                {
                    uchar p2 = frame.at<uchar>(i-1, j);
                    uchar p3 = frame.at<uchar>(i-1, j+1);
                    uchar p4 = frame.at<uchar>(i, j+1);
                    uchar p5 = frame.at<uchar>(i+1, j+1);

                    uchar p6 = frame.at<uchar>(i+1, j);
                    uchar p7 = frame.at<uchar>(i+1, j-1);
                    uchar p8 = frame.at<uchar>(i, j-1);
                    uchar p9 = frame.at<uchar>(i-1, j-1);

                    if ((p2+p3+p4+p5+p6+p7+p8+p9)==255)
                    {
                        dataOfFeatures.setPosRH(cv::Point2i(j,i));
                        break;
                    }
                }
            }
        }

         getForearmSize(frame,false);

         return dataOfFeatures;
    }


    void Tracking::getForearmSize(cv::Mat& img,bool isFirst)
    {
        cv::Mat tempImg;
        img.copyTo(tempImg);

        int tempLX = dataOfFeatures.getPosLH().x, tempLY = dataOfFeatures.getPosLH().y;

        int tempRX = dataOfFeatures.getPosRH().x, tempRY = dataOfFeatures.getPosRH().y;


        if (isFirst)
        {
            getSize(img,tempLX,tempLY,dataOfFeatures.getPosLE().x,dataOfFeatures.getPosLE().y,leftSize);
            getSize(img,tempRX,tempRY,dataOfFeatures.getPosRE().x,dataOfFeatures.getPosRE().y,rightSize);

            dataOfFeatures.setLeftSize(leftSize);
            dataOfFeatures.setRightSize(rightSize);
        }
        else
        {
            for (int i = 0; i < dataOfFeatures.getLeftSize(); i++)
            {
                for (int i=0;i<8;i++)
                {
                    if(tempImg.at<uchar>(tempLY+moveL[i][0],tempLX+moveL[i][1])==255)
                    {
                        tempImg.at<uchar>(tempLY,tempLX)=0;
                        tempLX+=moveL[i][1];
                        tempLY+=moveL[i][0];
                        break;
                    }
                }
            }

            dataOfFeatures.setPosLE(cv::Point2i(tempLX,tempLY));


            for (int i = 0; i < dataOfFeatures.getRightSize(); i++)
            {
                for (int i=0;i<8;i++)
                {
                    if(tempImg.at<uchar>(tempRY+moveR[i][0],tempRX+moveR[i][1])!=0)
                    {
                        //tempImg.at<uchar>(tempRY,tempRX)=0;
                        tempRX+=moveR[i][1];
                        tempRY+=moveR[i][0];
                        break;
                    }
                }
            }

            dataOfFeatures.setPosRE(cv::Point2i(tempRX,tempRY));

        }

        qDebug()<<dataOfFeatures.getPosLH().x<<" "<<dataOfFeatures.getPosLH().y<<" "<<dataOfFeatures.getPosRH().x<<" "<<dataOfFeatures.getPosRH().y;
    }

    void Tracking::getSize(cv::Mat &img, int curX, int curY, int destX, int destY,int& size)
    {
        while(curX!=destX || curY!=destY)
        {
            for (int i=0;i<8;i++)
            {
                if(img.at<uchar>(curY+moveL[i][0],curX+moveL[i][1])!=0)
                {
                    img.at<uchar>(curY,curX)=0;

                    size++;

                    curX = curX+moveL[i][1];
                    curY = curY+moveL[i][0];
                    break;
                }
            }
        }

    }

}
