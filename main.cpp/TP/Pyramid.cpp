#include "Pyramid.h"
#include <cmath>
#include <string>

Pyramid::Pyramid() : a(-1), h(-1) {}

void Pyramid::setA(double x) { a = x; }
void Pyramid::setH(double x) { h = x; }

std::string Pyramid::calculateArea() {
    if (a == -1 || h == -1) return "недостаточно данных";
    double s = a * a + 2 * a * sqrt(h * h + (a / 2) * (a / 2));
    return "Площадь пирамиды: " + std::to_string(s);
}