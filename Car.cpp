#include "Car.h"

Car::Car(const std::string& brand, int year, int numSeats) : TransportVehicle(brand, year), numSeats(numSeats) {}

void Car::displayInfo(std::ostream& out) const {
    TransportVehicle::displayInfo(out);
    out << "Type: Car, Number of Seats: " << numSeats << std::endl;
}