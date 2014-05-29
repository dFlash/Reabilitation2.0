#ifndef ALGOMANAGER_H
#define ALGOMANAGER_H

#include"ialgorithm.h"
#include"skeletization.h"
#include"tracking.h"
#include"dms.h"

namespace Algorithms
{
    class AlgoManager : public IAgorithm
    {
    public:
        AlgoManager(ISkeletization* skel, ITracking* track, Idms* DMS);
        void skeletization(bool isFirst,cv::Mat& currFrame, cv::Mat& skeleton);
        void tracking(bool isFirst, cv::Mat &currFrame, Data &data);
        QString dms(Model::Data& curData, Model::Data& mustData);

    private:
        ISkeletization* skel;
        ITracking* track;
        Idms* DMS;
    };
}


#endif // ALGOMANAGER_H
