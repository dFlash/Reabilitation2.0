#ifndef ISKELETIZATION_H
#define ISKELETIZATION_H

#include<QDebug>
#include<opencv2/highgui/highgui.hpp>
#include<opencv/cvaux.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>

namespace Algorithms
{
    class ISkeletization
    {
    public:
        virtual void setBackground(cv::Mat& back) = 0;
        virtual void getForeground(cv::Mat& curr) = 0;
        virtual cv::Mat getSkeleton() = 0;
    };
}

#endif // ISKELETIZATION_H
