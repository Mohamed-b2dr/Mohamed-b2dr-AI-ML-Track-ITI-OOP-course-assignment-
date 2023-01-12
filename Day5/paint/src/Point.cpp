#include "Point.h"

Point::Point()
    {

    cout << "You create object point using default constructor " << endl;
    }


Point::Point(int n, int m)
    {
        x = n;
        y = m;

    }

Point :: ~Point()
    {
          cout << "You destructor object point  " << endl;
    }

void Point:: setX(int n)
    {
        x = n;
    }
void Point :: setY(int m)
    {
        y = m;
    }

int Point :: getX()
    {
        return x;
    }
int Point :: getY()
    {
        return y;
    }
