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
std::string getSlotId() const;
 Vehicle* getParkedVehicle() const ;
};
#endif
