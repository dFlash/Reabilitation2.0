#ifndef ITRACKING_H
#define ITRACKING_H
#include<opencv2/highgui/highgui.hpp>
#include<opencv/cvaux.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include<data.h>

#include<QDebug>

using namespace Model;

namespace Algorithms
{
    class ITracking
    {
        public:
            virtual void init(cv::Mat& firstFrame) = 0;
            virtual Data findFeaturePoints(cv::Mat& frame) = 0;
    };
}

#endif // ITRACKING_H
