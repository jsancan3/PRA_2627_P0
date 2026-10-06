#include <iostream>
#include "RoboticArm.h"

int main() {
    RoboticArm arm;

    std::cout << "--- Estado inicial del brazo ---" << std::endl;
    std::cout << "Posicion: (" << arm.getX() << ", " << arm.getY() << ", " << arm.getZ() << ")" << std::endl;
    std::cout << "Sujetando objeto: " << (arm.getIsGrabbing() ? "Si" : "No") << std::endl;

    std::cout << "\nMoviendo brazo a (12.5, 5.0, 8.2)..." << std::endl;
    arm.move(12.5, 5.0, 8.2);
    std::cout << "Nueva posicion: (" << arm.getX() << ", " << arm.getY() << ", " << arm.getZ() << ")" << std::endl;

    std::cout << "\nCogiendo objeto..." << std::endl;
    arm.grab();
    std::cout << "Sujetando objeto: " << (arm.getIsGrabbing() ? "Si" : "No") << std::endl;

    return 0;
}
