#ifndef RECT_H
#define RECT_H

#include <Shape.h>


class Rect : public Shape
{
    public:
        Rect();
        ~Rect();
        float calculateArea();
        Rect(float num1, float num2);

};

#endif // RECT_H
