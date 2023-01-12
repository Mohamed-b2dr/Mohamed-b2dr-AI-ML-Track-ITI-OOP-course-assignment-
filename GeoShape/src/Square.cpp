#include "Square.h"
#include <iostream>

using namespace std;

Square::Square():Rect()
{
    cout <<"you create object Square by default constructor " << endl;
}

Square::~Square()
{
   cout <<"you destructor object Square" << endl;
}

Square::Square(float num):Rect(num, num)
{
    cout <<"you create object Square by constructor " << endl;
}

void Square::setRaduis( float num)
{
    dim1 = dim2 = num;
}

float Square::getRaduis()
{
    return dim1;
}


float Square::calculateArea()
{
    return dim1*dim2;
}

