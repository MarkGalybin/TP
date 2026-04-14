#pragma once
#include "Quadrilateral.h"

class Trapeciya : public Quadrilateral {
protected:
    double base1;
    double base2;
    double height;

public:
    Trapeciya(double b1 = -1, double b2 = -1, double h = -1);

    void setBase1(double b1);
    void setBase2(double b2);
    void setHeight(double h);

    std::string getArea() const override;
};