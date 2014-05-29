#ifndef ALGOMANAGER_H
#define ALGOMANAGER_H

#include"ialgorithm.h"
#include"skeletization.h"
#include"tracking.h"

namespace Algorithms
{
    class AlgoManager : public IAgorithm
    {
    public:
        AlgoManager(ISkeletization* skel, ITracking* track);
        void skeletization(bool isFirst,cv::Mat& currFrame, cv::Mat& skeleton);
        void tracking(bool isFirst, cv::Mat &currFrame, Data &data);
        void dms();

    private:
        ISkeletization* skel;
        ITracking* track;
    };
}


#endif // ALGOMANAGER_H
