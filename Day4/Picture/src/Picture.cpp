#include "Picture.h"
#include "Point.h"
#include "Cricle.h"
#include "Line.h"
#include "Rect.h"
#include <iostream>
#include<graphics.h>
Picture::Picture()
    {
       cNum = 0;
       rNum = 0;
       lNum = 0;
       pCricle = NULL;
       pRect = NULL;
       pLine = NULL;
       cout << "you create picture with default constructor" << endl;
    }

Picture::~Picture()
    {
        cout << "you object destructor" << endl;

    }

Picture :: Picture (int cn, int rn, int ln,  Cricle *pc,   Rect *pr,  Line *pl)
    {
           cNum = cn;
           rNum = rn;
           lNum = ln;
           pCricle = pc;
           pRect = pr;
           pLine = pl;
           cout << "you create picture with default constructor" << endl;
    }

void Picture :: setCricles (int n ,  Cricle *p )
    {
          pCricle = p;
          cNum = n;
    }
void Picture :: setRects (int n, Rect *r)
    {
        pRect = r;
        rNum = n;
    }
void Picture :: setLine (int n, Line *l)
    {
        pLine = l;
        lNum = n;

    }


void Picture :: draw()
    {

        int i ;

        for (i = 0 ; i< cNum; i++ )
            {
                pCricle[i].draw();
            }
        for (i = 0 ; i< rNum; i++ )
            {
                pRect[i].draw();
            }
        for (i = 0 ; i< lNum; i++ )
            {
                pLine[i].draw();
            }
    }
