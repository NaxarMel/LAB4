#include <iostream>
#include <fstream>
#include "Car.h"
#include "Truck.h"
#include "Ship.h"
#include "Airplane.h"

int main() {
    std::ofstream outFile("vehicles_info.txt");

    std::string brand;
    int year, numSeats, displacement, maxAltitude;
    double payloadCapacity;

    // ���������� ����� �� ����������� ��� ��'���� ���� Car
    std::cout << "Enter Car brand: ";
    std::cin >> brand;
    std::cout << "Enter Car year: ";
    std::cin >> year;
    std::cout << "Enter number of seats for Car: ";
    std::cin >> numSeats;

    Car car(brand, year, numSeats);

    // ���������� ����� �� ����������� ��� ��'���� ���� Truck
    std::cout << "\nEnter Truck brand: ";
    std::cin >> brand;
    std::cout << "Enter Truck year: ";
    std::cin >> year;
    std::cout << "Enter payload capacity for Truck (in tons): ";
    std::cin >> payloadCapacity;

    Truck truck(brand, year, payloadCapacity);

    // ���������� ����� �� ����������� ��� ��'���� ���� Ship
    std::cout << "\nEnter Ship brand: ";
    std::cin >> brand;
    std::cout << "Enter Ship year: ";
    std::cin >> year;
    std::cout << "Enter displacement for Ship (in tons): ";
    std::cin >> displacement;

    Ship ship(brand, year, displacement);

    // ���������� ����� �� ����������� ��� ��'���� ���� Airplane
    std::cout << "\nEnter Airplane brand: ";
    std::cin >> brand;
    std::cout << "Enter Airplane year: ";
    std::cin >> year;
    std::cout << "Enter max altitude for Airplane (in feet): ";
    std::cin >> maxAltitude;

    Airplane airplane(brand, year, maxAltitude);

    TransportVehicle* vehicles[] = { &car, &truck, &ship, &airplane };

    for (const auto& vehicle : vehicles) {
        vehicle->displayInfo(outFile);
        outFile << "--------------------------------\n";
    }

    outFile.close();

    return 0;
}
