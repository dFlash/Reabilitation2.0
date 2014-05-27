#include "algomanager.h"

namespace Algorithms
{
    AlgoManager::AlgoManager(ISkeletization* skel)
    {
        this->skel = skel;
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

    void AlgoManager::tracking(bool isFirst, cv::Mat &currFrame)
    {
        //
        qDebug()<<"AlgoManager::tracking";
    }

    void AlgoManager::dms()
    {
        //
        qDebug()<<"AlgoManager::dms()";
    }
}

