#ifndef CIRCLE_H
#define CIRCLE_H

#include <Shape.h>


class Circle : private Shape
{
    public:
        Circle();
        ~Circle();
        Circle(float num);

         void setCircleDim(float num);
         float getCircleDim();
         float calculateArea();


};

#endif // CIRCLE_H
