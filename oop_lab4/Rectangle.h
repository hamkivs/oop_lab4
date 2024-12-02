#pragma once
#include <fstream>

class Rectangle
{
protected:
    int width;  // Ширина прямокутника
    int height; // Висота прямокутника
    int x;      // Координата x лівої нижньої точки
    int y;      // Координата y лівої нижньої точки
public:
    Rectangle(); // Конструктор за замовчуванням
    Rectangle(int RectangleX, int RectangleY, int RectangleWidth, int RectangleHeight); // Конструктор з параметрами

    double getPerimeter(); // Метод для отримання периметра прямокутника
    double getArea();      // Метод для отримання площі прямокутника

    void getRectangleInfo(std::ofstream& File) // Метод для запису інформації про прямокутник у файл
    {
        File << "Rectangle information:" << std::endl;
        File << "Lower left point coordinates: (" << x << ", " << y << ")" << std::endl;
        File << "Width of rectangle: " << width << std::endl;
        File << "Height of rectangle: " << height << std::endl;
        File << "Rectangle perimeter: " << getPerimeter() << std::endl;
        File << "Area of a rectangle: " << getArea() << std::endl;
    }
};