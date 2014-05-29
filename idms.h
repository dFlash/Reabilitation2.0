#ifndef IDMS_H
#define IDMS_H
#include"data.h"
#include<QString>

using namespace Model;

namespace Algorithms
{
    class Idms
    {
    public:
        virtual void compare(Data &curData,Data& dataMust) = 0;
        virtual QString getDecision() = 0;
    };
}

#endif // IDMS_H
