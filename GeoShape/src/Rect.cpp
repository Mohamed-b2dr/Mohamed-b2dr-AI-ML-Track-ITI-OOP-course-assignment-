#include "Rect.h"
#include <iostream>

using namespace std;

Rect::Rect():Shape()
{
    cout <<"you create object Rect by default constructor " << endl;
}

Rect::~Rect()
{
   cout <<"you destructor object Rect" << endl;
}

Rect::Rect(float num1, float num2):Shape(num1, num2)
{
    cout <<"you create object Rect by constructor  " << endl;
}

float Rect::calculateArea()
{
    return dim1*dim2;
}

