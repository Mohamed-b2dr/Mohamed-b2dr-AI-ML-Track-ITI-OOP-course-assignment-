#include "Cricle.h"
#include "Point.h"
#include <iostream>
#include<graphics.h>
#include "Shape.h"

using namespace std;


Cricle::Cricle():Shape(),center()
        {
              cout <<" you create object Cricle using default constructor "  << endl;
        }
Cricle::Cricle(int n, int m, int r):Shape(),center(n, m)
        {
                raduis = r;
                cout <<" you create object Cricle using constructor "  << endl;
        }
Cricle::~Cricle()
    {
            cout << "you destructor object Cricle" << endl;
    }
void Cricle:: draw()
    {

        circle(center.getX(), center.getY(), raduis);
    }
void Cricle :: paint()
    {
        cout << "Cricle" <<endl;
    }
