#ifndef TRUCK_H
#define TRUCK_H

#include "TransportVehicle.h"

class Truck : public TransportVehicle {
    double payloadCapacity;

public:
    Truck(const std::string& brand, int year, double payloadCapacity);
    void displayInfo(std::ostream& out) const override;
};

#endif // TRUCK_H
