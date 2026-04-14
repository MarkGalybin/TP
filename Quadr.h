#pragma once
#include "IShape.h"

class Quadrilateral : public IShape {
protected:
    double diagonal1;
    double diagonal2;
    double angle;

public:
    Quadrilateral(double d1 = -1, double d2 = -1, double ang = -1);

    void setDiagonal1(double d1);
    void setDiagonal2(double d2);
    void setAngle(double ang);

    std::string getArea() const override;
};