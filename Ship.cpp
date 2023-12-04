#include "Ship.h"

Ship::Ship(const std::string& brand, int year, int displacement) : TransportVehicle(brand, year), displacement(displacement) {}

void Ship::displayInfo(std::ostream& out) const {
    TransportVehicle::displayInfo(out);
    out << "Type: Ship, Displacement: " << displacement << " tons" << std::endl;
}
