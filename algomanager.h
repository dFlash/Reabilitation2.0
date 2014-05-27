#ifndef ALGOMANAGER_H
#define ALGOMANAGER_H

#include"ialgorithm.h"
#include"skeletization.h"

namespace Algorithms
{
    class AlgoManager : public IAgorithm
    {
    public:
        AlgoManager(ISkeletization* skel);
        void skeletization(bool isFirst,cv::Mat& currFrame, cv::Mat& skeleton);
        void tracking(bool isFirst, cv::Mat &currFrame);
        void dms();

    private:
        ISkeletization* skel;
    };
}


#endif // ALGOMANAGER_H
