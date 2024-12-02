#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "InscribedRectangle.h"
#include <fstream>

//За допомогою множинного успадкування визначити клас Прямокутник, який
//вписаний в Коло. Класи Коло та Прямокутник повинні мати методи для
//обчислення площі та виводу інформації про фігури.
//Клас Коло повинен містити метод для обчислення довжини кола, 
//клас Прямокутник – для обчислення периметра прямокутника.
//Інформацію про класи вивести у файл, використовуючи файлові потоки.

int main()
{

    // Координати та радіус для кола
    int CircleX = 0;
    int CircleY = 0;
    int CircleRadius = 10;

    // Координати, ширина та висота для прямокутника
    int RectangleX = 0;
    int RectangleY = 0;
    int RectangleWidth = 6;
    int RectangleHeight = 8;

    // Створення об'єкта вписаного прямокутника, використовуючи параметри кола та прямокутника
    InscribedRectangle inscribedRectangle(CircleX, CircleY, CircleRadius, RectangleX, RectangleY, RectangleWidth, RectangleHeight);

    // Збереження інформації про вписаний прямокутник у файл
    inscribedRectangle.saveInfoInFile();

    return 0;
}