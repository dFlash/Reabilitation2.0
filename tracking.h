#ifndef TRACKING_H
#define TRACKING_H

#include"itracking.h"

namespace Algorithms
{

    class Tracking : public ITracking
    {
    public:
        Tracking();
        void init(cv::Mat &firstFrame);
        Data findFeaturePoints(cv::Mat &frame);

    private:
        Data dataOfFeatures;
        int step;
        int moveL[8][2];
        int moveR[8][2];
        int leftSize,rightSize;


        //get elbows coordinates
        void getForearmSize(cv::Mat& img,bool isFirst);
        //get sizes to elbows from hands
        void getSize(cv::Mat& img, int curX, int curY, int destX, int destY,int& size, int move[8][2]);

    };

}

#endif // TRACKING_H
