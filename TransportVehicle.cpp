#include "TransportVehicle.h"

TransportVehicle::TransportVehicle(const std::string& brand, int year) : brand(brand), year(year) {}

void TransportVehicle::displayInfo(std::ostream& out) const {
    out << "Brand: " << brand << ", Year: " << year << std::endl;
}

TransportVehicle::~TransportVehicle() {}
