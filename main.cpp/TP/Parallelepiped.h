#pragma once
#include "Shape.h"

class Parallelepiped : public Shape {
protected:
    double a, b, c;

public:
    Parallelepiped();
    void setA(double x);
    void setB(double x);
    void setC(double x);
    std::string calculateArea() override;
};