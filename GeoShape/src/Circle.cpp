#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle():Shape()
{
    cout <<"you create object Square by default constructor " << endl;
}

Circle::~Circle()
{
   cout <<"you destructor object Square" << endl;
}

Circle::Circle(float num):Shape(num, num)
{
    cout <<"you create object Square by constructor " << endl;
}

void Circle::setCircleDim( float num)
{
    dim1 = dim2 = num;
}

float Circle::getCircleDim()
{
    return dim1;
}


float Circle::calculateArea()
{

    //Rect::calculateArea();
    return 22.0/7*dim1*dim2;
}
