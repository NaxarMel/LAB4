#include "Airplane.h"

Airplane::Airplane(const std::string& brand, int year, int maxAltitude) : TransportVehicle(brand, year), maxAltitude(maxAltitude) {}

void Airplane::displayInfo(std::ostream& out) const {
    TransportVehicle::displayInfo(out);
    out << "Type: Airplane, Max Altitude: " << maxAltitude << " feet" << std::endl;
}
