#pragma once
#include "Parallelepiped.h"

class Cube : public Parallelepiped {
public:
    Cube();
    void setA(double x);
    std::string calculateArea() override;
};