#include "Sphere.h"
#include <cmath>
#include <string>

const double PI = 3.14159265358979323846;

Sphere::Sphere() : r(-1) {}

void Sphere::setR(double x) { r = x; }

std::string Sphere::calculateArea() {
    if (r == -1) return "недостаточно данных";
    double s = 4 * PI * r * r;
    return "Площадь сферы: " + std::to_string(s);
}