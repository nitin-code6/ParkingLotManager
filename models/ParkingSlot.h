#ifndef PARKINGSLOT_H
#define PARKINGSLOT_H
#include <string>
#include "Vehicle.h"
class ParkingSlot{
std::string slotId;
bool isOccupied;
Vehicle* parkedVehicle;
public:
ParkingSlot(const std::string &slotId);
bool parkVehicle(Vehicle* vehicle);
Vehicle* unparkVehicle();
bool isAvailable() const;
std::string getId() const;
 Vehicle* getParkedVehicle() const ;
};
#endif
