/**
 * Project Untitled
 */


#ifndef _SNOWMODE_H
#define _SNOWMODE_H

#include "IDrivingMode.hpp"


class SnowMode: public IDrivingMode {
public:
    void accelerate() override;
    void brake() override;
};

#endif //_SNOWMODE_H