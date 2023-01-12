#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <Shape.h>


class Triangle : public Shape
{
    public:
        Triangle();
        Triangle(float num1, float num2);
        ~Triangle();
        float calculateArea();

    protected:

    private:
};

#endif // TRIANGLE_H
