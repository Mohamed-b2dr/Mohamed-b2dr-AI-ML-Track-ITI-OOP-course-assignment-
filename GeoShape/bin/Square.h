#ifndef SQUARE_H
#define SQUARE_H

#include <Rect.h>


class Square : private Rect
{
    public:
        Square();
        ~Square();
         Square(float num);

         void setRaduis(float num);
         float getRaduis();
         float calculateArea();

};

#endif // SQUARE_H
