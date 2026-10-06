#include "RoboticArm.h"

RoboticArm::RoboticArm(double initialX, double initialY, double initialZ)
    : x(initialX), y(initialY), z(initialZ), isGrabbing(false) {}

double RoboticArm::getX() const {
    return x;
}

double RoboticArm::getY() const {
    return y;
}

double RoboticArm::getZ() const {
    return z;
}

bool RoboticArm::getIsGrabbing() const {
    return isGrabbing;
}

void RoboticArm::grab() {
    isGrabbing = true;
}

void RoboticArm::release() {
    isGrabbing = false;
}

void RoboticArm::move(double newX, double newY, double newZ) {
    x = newX;
    y = newY;
    z = newZ;
}
