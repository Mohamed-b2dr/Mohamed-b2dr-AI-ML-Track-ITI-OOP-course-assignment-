#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape()
{
   dim1 = dim2 =0;
   cout <<"you create object shape by default constructor" << endl;

}

Shape::~Shape()
{
     cout <<"you destructor object shape" << endl;
}

Shape::Shape(float num)
{
    dim1 = dim2 = num;
    cout <<"you create object shape by constructor one " << endl;
}

Shape::Shape(float num1 , float num2)
{
    dim1 = num1;
    dim2 = num2;
    cout <<"you create object shape by constructor two " << endl;
}

void Shape :: setDim1( float num)
{
    dim1 = num;
}

void Shape :: setDim2(float num)
{
    dim2 = num;
}


float Shape :: getDim1()
{
    return dim1;
}

float Shape :: getDim2()
{
    return dim2;
}

float Shape::calculateArea()
{
    return 0;
}
