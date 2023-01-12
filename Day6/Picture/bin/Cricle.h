#ifndef CRICLE_H
#define CRICLE_H
#include "Point.h"
#include "Shape.h"
class Cricle : public Shape
{
    private:
        Point center;
        int raduis;
    public:
        Cricle();
        Cricle (int m, int n, int r);
        void draw();
        ~Cricle();
         void paint();


};

#endif // CRICLE_H
