#include "Rect.h"
#include "Point.h"
#include <iostream>
#include<graphics.h>

using namespace std;


Rect::Rect():ul(),rl()
        {
              cout <<" you create object line using default constructor "  << endl;
        }
Rect::Rect(int x1, int y1, int x2, int y2):ul(x1, y1),rl(x2, y2)
        {
                cout <<" you create object line using constructor "  << endl;
        }
Rect::~Rect()
    {
            cout << "you destructor Rect" << endl;
    }
void Rect:: draw()
    {

        rectangle(ul.getX(), ul.getY(), rl.getX(), rl.getY());
    }
