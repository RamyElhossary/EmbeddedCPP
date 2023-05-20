/**
 * Project Untitled
 */


#ifndef _ECOMODE_H
#define _ECOMODE_H

#include "IDrivingMode.hpp"


class EcoMode: public IDrivingMode {
public:
    void accelerate() override;
    void brake() override;
};

#endif //_ECOMODE_H