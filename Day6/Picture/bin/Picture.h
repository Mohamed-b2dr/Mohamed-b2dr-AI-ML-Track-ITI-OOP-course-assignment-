#ifndef PICTURE_H
#define PICTURE_H
#include "Point.h"
#include "Cricle.h"
#include "Line.h"
#include "Rect.h"
#include "Shape.h"
class Picture
{
    private:
        int cNum;
        int lNum;
        int rNum;
        Cricle *pCricle;
        Rect *pRect;
        Line *pLine;
        Shape *Cshape;
        Shape *Rshape;
        Shape *Lshape;
    public:
        Picture();

        void setCricles (int n ,  Cricle *p );
        Picture (int cn, int rn, int ln,  Cricle *pc,   Rect *pr,  Line *pl);
        void setRects (int n, Rect *r);
        void setLine (int n, Line *l);
        void draw();
        virtual ~Picture();
        void paint();
        Picture (int cn, int rn, int ln,  Shape *pc,   Shape *pr,  Shape *pl);




};

#endif // PICTURE_H
