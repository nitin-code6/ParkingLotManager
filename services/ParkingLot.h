#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <vector>
#include "models/ParkingSlot.h"
#include "models/Vehicle.h"
class ParkingLot{
    std::vector<ParkingSlot>Slots;
    int totalSlots;
    public:
    ParkingLot(int totalSlots);
    std::string  parkVehicle(Vehicle *vehicle);
    Vehicle * unparkVehicle(std::string slotId);
    ParkingSlot * findAvailableSlot();
};
#endif