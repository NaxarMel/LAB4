#ifndef TRANSPORTVEHICLE_H
#define TRANSPORTVEHICLE_H

#include <iostream>
#include <fstream>
#include <string>

class TransportVehicle {
protected:
    std::string brand;
    int year;

public:
    TransportVehicle(const std::string& brand, int year);
    virtual void displayInfo(std::ostream& out) const;
    virtual ~TransportVehicle();
};

#endif // TRANSPORTVEHICLE_H
