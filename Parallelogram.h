#pragma once
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {
protected:
    double base;
    double height;

public:
    Parallelogram(double b = -1, double h = -1);

    void setBase(double b);
    void setHeight(double h);

    std::string getArea() const override;
};