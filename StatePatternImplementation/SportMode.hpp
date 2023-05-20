/**
 * Project Untitled
 */


#ifndef _SPORTMODE_H
#define _SPORTMODE_H

#include "IDrivingMode.hpp"


class SportMode: public IDrivingMode {
public:
    void accelerate() override;
    void brake() override;
};

#endif //_SPORTMODE_H