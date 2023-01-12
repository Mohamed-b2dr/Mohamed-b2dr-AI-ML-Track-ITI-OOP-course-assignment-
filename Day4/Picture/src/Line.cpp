#include "Line.h"
#include "Point.h"
#include <iostream>
#include<graphics.h>
using namespace std;


Line::Line():Start(),End()
        {
              cout <<" you create object line using default constructor "  << endl;
        }
Line::Line(int x1, int y1, int x2, int y2):Start(x1, y1),End(x2, y2)
        {
                cout <<" you create object line using constructor "  << endl;
        }
Line::~Line()
    {
            cout << "you destructor object line" << endl;
    }
void Line:: draw()
    {

       line(Start.getX(), Start.getY(), End.getX(), End.getX());
    }
