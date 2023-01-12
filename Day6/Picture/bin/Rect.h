#ifndef RECT_H
#define RECT_H
#include "Point.h"
#include "Shape.h"

class Rect : public Shape
{
    private:
        Point ul, rl;
    public:
        Rect();

        Rect(int x1, int y1, int x2, int y2);
        void draw();
        ~Rect();
         void paint();


    protected:


};

#endif // RECT_H
