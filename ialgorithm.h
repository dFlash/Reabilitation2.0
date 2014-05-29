#ifndef IALGORITHM_H
#define IALGORITHM_H
#include<opencv2/highgui/highgui.hpp>
#include<opencv/cvaux.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>

#include"data.h"

#include<QDebug>

namespace Algorithms
{
    class IAgorithm
    {
    public:
        virtual void skeletization(bool isFirst,cv::Mat& currFrame, cv::Mat& skeleton) = 0;
        virtual void tracking(bool isFirst, cv::Mat& currFrame,Model::Data &data) = 0;
        virtual void dms() = 0;
    };

}
#endif // IALGORITHM_H
