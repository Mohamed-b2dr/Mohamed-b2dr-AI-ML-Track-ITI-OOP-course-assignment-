#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include "Shape.h"
class Line : public Shape
{
    private:
        Point Start, End;
    public:
        Line();

        Line(int x1, int y1, int x2, int y2);
        void draw();

        ~Line();


};

#endif // LINE_H
