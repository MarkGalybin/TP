#include "Cube.h"

Cube::Cube() : Parallelepiped() {}

void Cube::setA(double x) {
    a = b = c = x;
}

std::string Cube::calculateArea() {
    if (a == -1) return "недостаточно данных";
    double s = 6 * a * a;
    return "Площадь куба: " + std::to_string(s);
}