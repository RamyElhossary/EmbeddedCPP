/**
 * Project Untitled
 */


#ifndef _CAR_H
#define _CAR_H

#include "IDrivingMode.hpp"
#include "EcoMode.hpp"
#include <memory>
class Car {
public: 
    Car(std::unique_ptr<IDrivingMode> mode);
    void accelerate();

    void brake();

    void selectMode(std::unique_ptr<IDrivingMode> mode);

private: 
    std::unique_ptr<IDrivingMode> m_drivingMode;
};

#endif //_CAR_H