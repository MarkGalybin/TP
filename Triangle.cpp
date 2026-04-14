#include "Triangle.h"

Triangle::Triangle(double b, double h) : base(b), height(h) {}

void Triangle::setBase(double b) {
    base = b;
}

void Triangle::setHeight(double h) {
    height = h;
}

std::string Triangle::getArea() const {
    if (base == -1 || height == -1) {
        return "Недостаточно данных";
    }

    double area = 0.5 * base * height;
    return std::to_string(area);
}