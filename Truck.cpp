#include "Truck.h"

Truck::Truck(const std::string& brand, int year, double payloadCapacity) : TransportVehicle(brand, year), payloadCapacity(payloadCapacity) {}

void Truck::displayInfo(std::ostream& out) const {
    TransportVehicle::displayInfo(out);
    out << "Type: Truck, Payload Capacity: " << payloadCapacity << " tons" << std::endl;
}
