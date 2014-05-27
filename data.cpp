#include "data.h"

namespace Model
{
//getters
    cv::Point2i Data::getPosLH()
    {
        return posLH;
    }

    cv::Point2i Data::getPosRH()
    {
        return posRH;
    }

    cv::Point2i Data::getPosLE()
    {
        return posLE;
    }

    cv::Point2i Data::getPosRE()
    {
        return posRE;
    }

    int Data::getLeftSize()
    {
       return leftSize;
    }

    int Data::getRightSize()
    {
        return rightSize;
    }

//setters
    void Data::setPosLH(cv::Point2i pLH)
    {
        posLH = pLH;
    }

    void Data::setPosRH(cv::Point2i pRH)
    {
        posRH = pRH;
    }

    void Data::setPosLE(cv::Point2i pLE)
    {
        posLE = pLE;
    }

    void Data::setPosRE(cv::Point2i pRE)
    {
        posRE = pRE;
    }

    void Data::setLeftSize(int lSize)
    {
        leftSize = lSize;
    }

    void Data::setRightSize(int rSize)
    {
        rightSize = rSize;
    }
}
