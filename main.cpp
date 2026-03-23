#include <iostream>
#include "services/ParkingLot.h"
#include "models/Car.h"
#include "models/Bike.h"
#include "models/Truck.h"

using namespace std;
int main(){
    ParkingLot lot(5);
    while(true){
        int choice ;
        cout << "\n1. Park Vehicle\n2. Unpark Vehicle\n3. Exit\n";
    cin >> choice;
if(choice==1){ 
     int type;
     string Plate;
     cout << "Enter Vehicle Type (1-Car, 2-Bike, 3-Truck): ";
    cin >> type;

    cout << "Enter License Plate: ";
    cin >> Plate;
    Vehicle *v=nullptr;
      if (type == 1) v = new Car(Plate);
    else if (type == 2) v = new Bike(Plate);
    else if (type == 3) v = new Truck(Plate);
    else {
        cout << "Invalid type\n";
        continue;
    }
      string slot = lot.parkVehicle(v);
    cout << "Parked at: " << slot << endl;
} 
else if (choice==2){
    string slotId;
    int hours;
    cout << "Enter Slot ID: ";
    cin >> slotId;

    cout << "Enter hours parked: ";
    cin >> hours;
     Vehicle* v = lot.unparkVehicle(slotId);
         if (v == nullptr) {
        cout << "Invalid Slot or Empty\n";
    } else {
        double fee = v->calculateFee(hours);
        cout << "Vehicle removed. Fee: " << fee << endl;
        delete v;  // free memory
    }
}
else if (choice == 3) {
    break;
}
else {
    cout << "Invalid choice\n";
}
    }
    return 0;
}