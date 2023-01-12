#ifndef CRICLE_H
#define CRICLE_H
#include "Point.h"

class Cricle
{
    private:
        Point center;
        int raduis;
    public:
        Cricle();
        Cricle (int m, int n, int r);
        void draw();
        ~Cricle();


};

#endif // CRICLE_H
