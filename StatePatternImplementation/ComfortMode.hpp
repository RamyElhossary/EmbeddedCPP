/**
 * Project Untitled
 */


#ifndef _COMFORTMODE_H
#define _COMFORTMODE_H

#include "IDrivingMode.hpp"


class ComfortMode: public IDrivingMode {
public:
    void accelerate() override;
    void brake() override;
};

#endif //_COMFORTMODE_H