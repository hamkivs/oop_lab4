#include "Circle.h"
#include <iostream>

Circle::Circle()
{
    x = 0;
    y = 0;
    radius = 0;
}

Circle::Circle(int CircleX, int CircleY, int CircleRadius)
{
    this->x = CircleX;
    this->y = CircleY;
    this->radius = CircleRadius;
}

double Circle::getLength()
{
    return 2 * 3.14 * radius;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}