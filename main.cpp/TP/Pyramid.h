#pragma once
#include "Shape.h"

class Pyramid : public Shape {
private:
    double a;
    double h;

public:
    Pyramid();
    void setA(double x);
    void setH(double x);
    std::string calculateArea() override;
};