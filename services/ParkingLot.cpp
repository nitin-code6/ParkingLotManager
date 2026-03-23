#include "ParkingLot.h"

ParkingLot::ParkingLot(int totalSlots){
    for (int i=0;i<totalSlots;i++){
        std::string slotId="A"+std::to_string(i);
        ParkingSlot Slot(slotId);
        Slots.push_back(Slot);
    }
}
    std::string  ParkingLot::parkVehicle(Vehicle *vehicle){
       for (auto &Slot: Slots ){
        if(Slot.isAvailable()){
            Slot.parkVehicle(vehicle);
            return Slot.getSlotId();
        }
       } 
       return "Parking Facility is Full";
    }
    Vehicle * ParkingLot::unparkVehicle(std::string slotId){
           for(auto &Slot :Slots){
            if(Slot.getSlotId()==slotId)
            return Slot.unparkVehicle();
           }
           return nullptr;
    }
    ParkingSlot * ParkingLot::findAvailableSlot(){
            for (auto &Slot: Slots ){
        if(Slot.isAvailable()){
         return &Slot; }
       } 
       return nullptr;
    }