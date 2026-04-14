#pragma once
#include "IShape.h"

class Triangle : public IShape {
protected:
    double base;
    double height;

public:
    Triangle(double b = -1, double h = -1);

    void setBase(double b);
    void setHeight(double h);

    std::string getArea() const override;
};
