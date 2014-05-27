#ifndef DATA_H
#define DATA_H

#include<opencv2/highgui/highgui.hpp>
#include<opencv/cvaux.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>

namespace Model
{
    class Data
    {
    public:
        //getters
        cv::Point2i getPosLH();
        cv::Point2i getPosRH();
        cv::Point2i getPosLE();
        cv::Point2i getPosRE();
        int getLeftSize();
        int getRightSize();

        //setters
        void setPosLH(cv::Point2i pLH);
        void setPosRH(cv::Point2i pRH);
        void setPosLE(cv::Point2i pLE);
        void setPosRE(cv::Point2i pRE);
        void setLeftSize(int lSize);
        void setRightSize(int rSize);


    private:
        cv::Point2i posLH;
        cv::Point2i posRH;
        cv::Point2i posLE;
        cv::Point2i posRE;
        int leftSize;
        int rightSize;
    };

}

#endif // DATA_H
