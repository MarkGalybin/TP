#include "Quadrilateral.h"
#include <cmath>
#include <string>

Quadrilateral::Quadrilateral(double d1, double d2, double ang)
    : diagonal1(d1), diagonal2(d2), angle(ang) {
}

void Quadrilateral::setDiagonal1(double d1) { diagonal1 = d1; }
void Quadrilateral::setDiagonal2(double d2) { diagonal2 = d2; }
void Quadrilateral::setAngle(double ang) { angle = ang; }

std::string Quadrilateral::getArea() const {
    if (diagonal1 == -1 || diagonal2 == -1 || angle == -1) {
        return "Недостаточно данных";
    }
    double area = 0.5 * diagonal1 * diagonal2 * sin(angle);
    return std::to_string(area);
}