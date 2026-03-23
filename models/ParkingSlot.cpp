#include "ParkingSlot.h"

ParkingSlot::ParkingSlot(const std::string &slotId){
    this->slotId = slotId;
    isOccupied = false;
    parkedVehicle = nullptr;
}
bool ParkingSlot::parkVehicle(Vehicle* vehicle){
    
   if (!isOccupied){
    parkedVehicle=vehicle;
    isOccupied=true;
    return true;
   }
   return false;
}
Vehicle*  ParkingSlot::unparkVehicle(){
    Vehicle* temp=parkedVehicle;
    isOccupied=false;
    parkedVehicle = nullptr;
    return temp;
}
bool ParkingSlot::isAvailable() const{
    return !isOccupied;
}
std::string ParkingSlot::getSlotId() const{
    return slotId;
}
Vehicle* ParkingSlot::getParkedVehicle() const{
    return parkedVehicle;
}
