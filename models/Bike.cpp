#include "Bike.h"

Bike::Bike(const std::string & licensePlate):Vehicle(licensePlate)
{

}

   double Bike::calculateFee(int hoursParked) {
    return hoursParked*10;
   }