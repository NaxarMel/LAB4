#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "TransportVehicle.h"

class Airplane : public TransportVehicle {
    int maxAltitude;

public:
    Airplane(const std::string& brand, int year, int maxAltitude);
    void displayInfo(std::ostream& out) const override;
};

#endif // AIRPLANE_H
