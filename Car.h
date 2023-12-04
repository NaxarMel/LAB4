#ifndef CAR_H
#define CAR_H

#include "TransportVehicle.h"

class Car : public TransportVehicle {
    int numSeats;

public:
    Car(const std::string& brand, int year, int numSeats);
    void displayInfo(std::ostream& out) const override;
};

#endif // CAR_H
