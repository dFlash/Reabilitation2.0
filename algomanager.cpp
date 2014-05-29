#include "algomanager.h"

namespace Algorithms
{
    AlgoManager::AlgoManager(ISkeletization* skel,ITracking* track,Idms* DMS)
    {
        this->skel = skel;
        this->track = track;
        this->DMS = DMS;
    }

    void AlgoManager::skeletization(bool isFirst,cv::Mat& currFrame, cv::Mat& skeleton)
    {
        if (isFirst)
        {
            skel->setBackground(currFrame);
            return;
        }
        else
        {
            skel->getForeground(currFrame);
            skeleton = skel->getSkeleton();
        }
    }

    void AlgoManager::tracking(bool isFirst, cv::Mat &currFrame, Data& data)
    {
        if(isFirst)
        {
            track->init(currFrame);
        }
        else
        {
            data = track->findFeaturePoints(currFrame);
        }
    }

    QString AlgoManager::dms(Model::Data& curData, Model::Data& mustData)
    {
        DMS->compare(curData,mustData);
        return DMS->getDecision();
    }
}

