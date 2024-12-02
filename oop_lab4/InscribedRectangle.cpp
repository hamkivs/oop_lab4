#include "InscribedRectangle.h"
#include <fstream>
#include <iostream>

InscribedRectangle::InscribedRectangle(int CircleX, int CircleY, int CircleRadius, int RectangleX, int RectangleY, int RectangleWidth, int RectangleHeight)
{
    this->Circle::x = CircleX;
    this->Circle::y = CircleY;
    this->radius = CircleRadius;

    // Вписування прямокутника в коло
    double diagonal = 2 * CircleRadius;
    this->width = diagonal / sqrt(2);
    this->height = diagonal / sqrt(2);

    // Центрування прямокутника відносно кола
    this->Rectangle::x = CircleX - this->width / 2;
    this->Rectangle::y = CircleY - this->height / 2;
}

void InscribedRectangle::saveInfoInFile()
{
    std::ofstream file("infoFile.txt");
    if (file.is_open())
    {
        getCircleInfo(file);
        file << std::endl;
        getRectangleInfo(file);
        file << std::endl;
        file.close();
        std::cout << "\nInformation saved to file!" << std::endl;
    }
    else
    {
        std::cout << "Error opening file!" << std::endl;
    }
}