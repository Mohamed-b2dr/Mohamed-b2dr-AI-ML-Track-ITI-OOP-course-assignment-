#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape()
{
   color =0;
   cout << "you create object shape by default constructor" << endl;
}

Shape::Shape(int n)
    {
        color = n;
    }

Shape::~Shape()
{
    cout << "you destructor shape object" << endl;
}

int Shape :: getColor()
    {
        return color;
    }

void Shape::setColor( int n)
    {
        color = n;
    }
