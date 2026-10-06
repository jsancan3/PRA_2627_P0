#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
private:
    double x;
    double y;
    double z;
    bool isGrabbing;

public:
    // Constructor (inicia en (0, 0, 0) y sin sujetar objeto)
    RoboticArm(double initialX = 0.0, double initialY = 0.0, double initialZ = 0.0);

    // Métodos consultores (getters)
    double getX() const;
    double getY() const;
    double getZ() const;
    bool getIsGrabbing() const;

    // Métodos de acción
    void grab();
    void release();
    void move(double newX, double newY, double newZ);
};

#endif // ROBOTICARM_H
