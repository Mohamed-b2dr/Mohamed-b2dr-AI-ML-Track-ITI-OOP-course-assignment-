#ifndef PICTURE_H
#define PICTURE_H
#include "Point.h"
#include "Cricle.h"
#include "Line.h"
#include "Rect.h"
class Picture
{
    private:
        int cNum;
        int lNum;
        int rNum;
        Cricle *pCricle;
        Rect *pRect;
        Line *pLine;
    public:
        Picture();
        Picture(int cn, int rn, int ln,  Cricle *pc,   Rect *pr,  Line *pl);
        void setCricles (int n ,  Cricle *p );
        void setRects (int n, Rect *r);
        void setLine (int n, Line *l);
        void draw();
        virtual ~Picture();



};

#endif // PICTURE_H
