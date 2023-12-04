#ifndef SHIP_H
#define SHIP_H

#include "TransportVehicle.h"

class Ship : public TransportVehicle {
    int displacement;

public:
    Ship(const std::string& brand, int year, int displacement);
    void displayInfo(std::ostream& out) const override;
};

#endif // SHIP_H
