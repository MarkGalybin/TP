#pragma once
#include "Shape.h"

class Sphere : public Shape {
private:
    double r;

public:
    Sphere();
    void setR(double x);
    std::string calculateArea() override;
};