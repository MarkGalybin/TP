#include "Trapeciya.h"

Trapeciya::Trapeciya(double b1, double b2, double h)
    : Quadrilateral(), base1(b1), base2(b2), height(h) {
}

void Trapeciya::setBase1(double b1) { base1 = b1; }
void Trapeciya::setBase2(double b2) { base2 = b2; }
void Trapeciya::setHeight(double h) { height = h; }

std::string Trapeciya::getArea() const {
    if (base1 == -1 || base2 == -1 || height == -1) {
        return "Недостаточно данных";
    }
    double area = (base1 + base2) / 2.0 * height;
    return std::to_string(area);
}