#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
    x = 0;
    y = 0;
    width = 0;
    height = 0;
}

Rectangle::Rectangle(int RectangleX, int RectangleY, int RectangleWidth, int RectangleHeight)
{
    this->x = RectangleX;
    this->y = RectangleY;
    this->width = RectangleWidth;
    this->height = RectangleHeight;
}

double Rectangle::getPerimeter()
{
    return 2 * (width + height);
}

double Rectangle::getArea()
{
    return width * height;
}