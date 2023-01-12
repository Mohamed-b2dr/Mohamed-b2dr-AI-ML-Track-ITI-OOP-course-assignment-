#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle():Shape()
{
    cout <<"you create object Triangle by default constructor " << endl;
}

Triangle::~Triangle()
{
   cout <<"you destructor object Triangle" << endl;
}

Triangle::Triangle(float num1, float num2):Shape(num1, num2)
{
    cout <<"you create object Triangle by constructor  " << endl;
}

float Triangle::calculateArea()
{
    return 0.5*dim1*dim2;
}
