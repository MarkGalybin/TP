#pragma once
#include <string>

class Shape {
public:
    virtual ~Shape() {}
    virtual std::string calculateArea() = 0;
};