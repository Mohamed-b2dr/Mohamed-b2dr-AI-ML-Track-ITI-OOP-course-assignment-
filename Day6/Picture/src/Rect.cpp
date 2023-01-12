#include "Rect.h"
#include "Point.h"
#include <iostream>
#include<graphics.h>
#include "Shape.h"

using namespace std;


Rect::Rect():ul(),rl()
        {
              cout <<" you create object Rect using default constructor "  << endl;
        }
Rect::Rect(int x1, int y1, int x2, int y2):ul(x1, y1),rl(x2, y2)
        {
                cout <<" you create object Rect using constructor "  << endl;
        }
Rect::~Rect()
    {
            cout << "you destructor Rect" << endl;
    }
void Rect:: draw()
    {

        rectangle(ul.getX(), ul.getY(), rl.getX(), rl.getY());
    }
void Rect :: paint()
    {
        cout << "Rect" <<endl;
    }
