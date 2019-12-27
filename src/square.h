#ifndef SQUARE_H
#define SQUARE_H

#include <QString>
#include "rectangle.h"

namespace Rosdistant {
    class Point;

    /*
     2D-square class
     */

    class Square: public Rectangle
    {
    public:
        Square();
        Square(const Point& point1, const Point& point2, const Point& point3, const Point& point4);
        Square(const Point& point, double size);
        virtual ~Square();

        //строковое представление фигуры
        operator QString();

        //валидность фигуры
        bool isValid() const;

        //возвраащет название класса
        QString className() const;
    };

}

#endif // SQUARE_H
