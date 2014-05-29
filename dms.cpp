#include "dms.h"
namespace Algorithms
{
DMS::DMS()
{
    leftHandXdist=0;
    leftHandYdist=0;
    rightHandXdist=0;
    rightHandYdist=0;
    isNorm=true;
    result="";
}

void DMS::compare(Data &curData,Data& dataMust)
{
    result="";
    isNorm=true;
    leftHandXdist = curData.getPosLH().x - dataMust.getPosLH().x;
    leftHandYdist = curData.getPosLH().y - dataMust.getPosLH().y;

    rightHandXdist = curData.getPosRH().x - dataMust.getPosRH().x;
    rightHandYdist = curData.getPosRH().y - dataMust.getPosRH().y;
}

QString DMS::getDecision()
{
    //левая рука Х
    if (leftHandXdist < DMS::threshMinus)
    {
        result+="Right Hand left\n";
        isNorm=false;
    }
    else
    if (leftHandXdist > DMS::threshPlus)
    {
        result+="Rightt Hand right\n";
        isNorm=false;
    }

    //левая рука У
    if (leftHandYdist < DMS::threshMinus)
    {
        result+="Right Hand lower\n";
        isNorm=false;
    }
    else
    if (leftHandYdist > DMS::threshPlus)
    {
        result+="Right Hand upper\n";
        isNorm=false;
    }

    //правая рука Х
    if (rightHandXdist < DMS::threshMinus)
    {
        result+="Left Hand left\n";
        isNorm=false;
    }
    else
    if (rightHandXdist > DMS::threshPlus)
    {
        result+="Left Hand right\n";
        isNorm=false;
    }

    //правая рука У
    if (rightHandYdist < DMS::threshMinus)
    {
        result+="Left Hand lower\n";
        isNorm=false;
    }
    else
    if (rightHandYdist > DMS::threshPlus)
    {
        result+="Left Hand upper\n";
        isNorm=false;
    }

    if (isNorm)
    {
        result="NORM";
    }

    return result;
}

}
