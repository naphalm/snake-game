#pragma once
#include "point.hpp"
#include <vector>
#include <memory>

class Snake {
    std::vector<Point> segments; // Folosim vector pentru a stoca segmentele
    int length;

public:
    Snake();              
    void Move(const Point& direction); 
    void Grow();         
    Point GetHeadPosition() const; 
};
