#pragma once

#include "abstract_painter.hpp"

class Painter : public AbstractPainter {
public:
    virtual void DrawImage(Point topLeft, Point bottomRight, char** image) override; 
    virtual void WriteText(Point position, char* text) override;                     
};
