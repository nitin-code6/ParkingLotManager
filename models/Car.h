#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

// Car inherits from Vehicle
class Car : public Vehicle{
    public:
    // Will call parent constructor
    // Constructors are NOT inherited in C++
    Car(const std::string &licensePlate);
    // This function replaces base class function
    double calculateFee(int hoursParked) override;
};

#endif
