#ifndef RECT_H
#define RECT_H
#include "Point.h"


class Rect
{
    private:
        Point ul, rl;
    public:
        Rect();

        Rect(int x1, int y1, int x2, int y2);
        void draw();
        ~Rect();

    protected:


};

#endif // RECT_H
