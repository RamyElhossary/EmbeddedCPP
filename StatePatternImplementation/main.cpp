#include <iostream>
#include <memory>
#include "Car.hpp"
#include "EcoMode.hpp"
#include "ComfortMode.hpp"
#include "SportMode.hpp"
#include "SnowMode.hpp"

int main(void) {
    Car car(std::make_unique<EcoMode>());
    
    car.accelerate();
    car.brake();

    car.selectMode(std::make_unique<ComfortMode>());

    car.accelerate();
    car.brake();

    car.selectMode(std::make_unique<SportMode>());

    car.accelerate();
    car.brake();

    
    car.selectMode(std::make_unique<SnowMode>());

    car.accelerate();
    car.brake();



    return 0;
}