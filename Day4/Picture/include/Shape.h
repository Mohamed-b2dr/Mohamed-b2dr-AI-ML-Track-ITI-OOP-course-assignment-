#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
    private:
        int color;
     public:
         Shape();
         Shape(int n);
        ~Shape();
         int getColor();
         void setColor(int n);

};

#endif // SHAPE_H
