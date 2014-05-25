#ifndef SKELETIZATION_H
#define SKELETIZATION_H
#include<iskeletization.h>

namespace Algorithms
{
    class Skeletization : public ISkeletization
    {
    public:
        Skeletization();
        void setBackground(cv::Mat& back);
        void getForeground(cv::Mat& curr);
        cv::Mat getSkeleton();

    private:
        cv::Mat background;
        cv::Mat foreground;
        cv::Mat skeleton;
        cv::Rect* roi;
        int threshold;
        void thinningIteration(cv::Mat& im, int iter);
    };
}


#endif // SKELETIZATION_H
