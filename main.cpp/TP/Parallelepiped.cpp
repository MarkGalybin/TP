#include "Parallelepiped.h"
#include <string>

Parallelepiped::Parallelepiped() : a(-1), b(-1), c(-1) {}

void Parallelepiped::setA(double x) { a = x; }
void Parallelepiped::setB(double x) { b = x; }
void Parallelepiped::setC(double x) { c = x; }

std::string Parallelepiped::calculateArea() {
    if (a == -1 || b == -1 || c == -1) return "недостаточно данных";
    double s = 2 * (a * b + a * c + b * c);
    return "ѕлощадь параллелепипеда: " + std::to_string(s);
}