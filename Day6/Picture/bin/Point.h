#ifndef POINT_H
#define POINT_H
#include <iostream>


using namespace std;
class Point
{
    private:
        int x;
        int y;
    public:
        Point();
        Point(int n, int m);
        ~Point();

        void setX(int n);
        void setY(int m);

        int getX();
        int getY();

    protected:

};



#endif // POINT_H
