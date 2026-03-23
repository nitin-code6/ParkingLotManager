#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

// Car inherits from Vehicle
class Truck : public Vehicle{
    public:
    // Will call parent constructor
    // Constructors are NOT inherited in C++
    Truck(const std::string &licensePlate);
    // This function replaces base class function
    double calculateFee(int hoursParked) override;
};

#endif
