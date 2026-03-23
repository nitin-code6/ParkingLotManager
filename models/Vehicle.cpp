#include "Vehicle.h"
// Constructor
Vehicle::Vehicle(const std::string& licensePlate){
    this->licensePlate=licensePlate;

}
// Getter
std::string Vehicle::getlicensePlate() const {
    return licensePlate;
}