#include "Cylinder.h"
#include <cmath>
#include <string>

const double PI = 3.14159265358979323846;

Cylinder::Cylinder() : r(-1), h(-1) {}

void Cylinder::setR(double x) { r = x; }
void Cylinder::setH(double x) { h = x; }

std::string Cylinder::calculateArea() {
    if (r == -1 || h == -1) return "недостаточно данных";
    double s = 2 * PI * r * (r + h);
    return "Площадь цилиндра: " + std::to_string(s);
}