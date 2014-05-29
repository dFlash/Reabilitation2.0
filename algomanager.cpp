#include "algomanager.h"

namespace Algorithms
{
    AlgoManager::AlgoManager(ISkeletization* skel,ITracking* track)
    {
        this->skel = skel;
        this->track = track;
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

    void AlgoManager::dms()
    {
        //
        qDebug()<<"AlgoManager::dms()";
    }
}

