#pragma once
#include "Circle.h"
#include "Rectangle.h"

class InscribedRectangle : public Circle, public Rectangle
{
public:
    // Конструктор з параметрами
    InscribedRectangle(int CircleX, int CircleY, int CircleRadius, int RectangleX, int RectangleY, int RectangleWidth, int RectangleHeight);

    // Метод для збереження інформації у файл
    void saveInfoInFile();
};