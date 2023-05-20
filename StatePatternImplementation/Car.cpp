/**
 * Project Untitled
 */


#include <iostream>
#include <memory>
#include "Car.hpp"

/**
 * Car implementation
 */

Car::Car(std::unique_ptr<IDrivingMode> mode) {
    m_drivingMode = std::move(mode);
    mode = nullptr;
}

void Car::accelerate() {
    m_drivingMode->accelerate();
}

void Car::brake() {
    m_drivingMode->brake();
}


void Car::selectMode(std::unique_ptr<IDrivingMode> mode) {
    m_drivingMode = std::move(mode);
    mode = nullptr;
}