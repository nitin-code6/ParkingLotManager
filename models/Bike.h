#ifndef BIKE_H
#define BIKE_H
#include "Vehicle.h"

// Car inherits from Vehicle
class Bike : public Vehicle{
    public:
    // Will call parent constructor
    // Constructors are NOT inherited in C++
    Bike(const std::string &licensePlate);
    // This function replaces base class function
    double calculateFee(int hoursParked) override;
};

#endif
