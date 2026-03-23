#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
class Vehicle{
     std::string licensePlate;
 
    public:
    Vehicle(const std::string &licensePlate);
    virtual  double calculateFee(int hoursParked)=0;
     virtual ~Vehicle()=default;

     std::string getlicensePlate() const;
};

#endif