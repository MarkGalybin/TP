#include "Parallelogram.h"

Parallelogram::Parallelogram(double b, double h) : Quadrilateral(), base(b), height(h) {}

void Parallelogram::setBase(double b) { base = b; }
void Parallelogram::setHeight(double h) { height = h; }

std::string Parallelogram::getArea() const {
    if (base == -1 || height == -1) {
        return "Недостаточно данных";
    }
    double area = base * height;
    return std::to_string(area);
}