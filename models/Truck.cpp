#include "Truck.h"
Truck::Truck(const std::string & licensePlate):Vehicle(licensePlate)
{

}

   double Truck::calculateFee(int hoursParked) {
    return hoursParked*35;
   }