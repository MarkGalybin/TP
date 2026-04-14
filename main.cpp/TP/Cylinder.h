#pragma once
#include "Shape.h"

class Cylinder : public Shape {
private:
    double r;
    double h;

public:
    Cylinder();
    void setR(double x);
    void setH(double x);
    std::string calculateArea() override;
};