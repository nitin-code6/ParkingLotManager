#include "Car.h"
// Car c("KA01")
//    ↓
// Call Car constructor
//    ↓
// : Vehicle(licensePlate)   ← THIS LINE RUNS FIRST
//    ↓
// Vehicle("KA01") runs
//    ↓
// licensePlate stored inside Vehicle
//    ↓
// Now Car constructor body runs { }
 Car::Car(const std::string & licensePlate):Vehicle(licensePlate)
{

}

   double Car::calculateFee(int hoursParked) {
    return hoursParked*25;
   }