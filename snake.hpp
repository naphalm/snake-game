#pragma once
#include "point.hpp"

class Snake {
    Point segments[100];
    int length;
public:
    Snake();
    void Move();
    void Grow();
    Point GetHeadPosition() const;
};
