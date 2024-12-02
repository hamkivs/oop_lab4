#pragma once
#include <fstream>

class Circle
{
protected:
    int radius; // Радіус кола
    int x; // Координата X центру кола
    int y; // Координата Y центру кола
public:
    Circle(); // Конструктор за замовчуванням
    Circle(int CircleX, int CircleY, int CircleRadius); // Конструктор з параметрами

    double getLength(); // Метод для отримання довжини кола
    double getArea(); // Метод для отримання площі кола

    void getCircleInfo(std::ofstream& File) // Метод для запису інформації про коло у файл
    {
        File << "Circle Information:" << std::endl;
        File << "Coordinates of the center of the circle: (" << x << ", " << y << ")" << std::endl;
        File << "Radius of a circle: " << radius << std::endl;
        File << "Length of a circle: " << getLength() << std::endl;
        File << "Area of the circle: " << getArea() << std::endl;
    }
};