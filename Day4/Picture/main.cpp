#include <iostream>
#include "Picture.h"
#include "Point.h"
#include "Cricle.h"
#include "Line.h"
#include "Rect.h"
#include<graphics.h>
using namespace std;

int main()
{
  /*
   Picture myPic;
   Cricle cArr[3] = {Cricle(50,50,5),Cricle(100,100,10),Cricle(150,150,15)};
   Rect rArr[2] = {Rect(30,40,60,70), Rect(50,70,60,70)};
   Line lArr[2] = {Line(80,40,50,70), Line(90,100,90,80)};
   myPic.setCricles (3 ,cArr );
   myPic.setRects (2 ,rArr );
   myPic.setLine (2 ,lArr );
   myPic.draw();
   */
   //Cricle carr[10];
   Picture myPic;
   Cricle cArr[3] = {Cricle(50,50,5),Cricle(100,100,10),Cricle(150,150,15)};
   Rect rArr[2] = {Rect(30,40,60,70), Rect(50,50,30,30)};
   Line lArr[2] = {Line(80,40,50,70), Line(90,10,90,80)};

   myPic.setCricles (3 , cArr );
   myPic.setRects (2 ,rArr );
   myPic.setLine (2 ,lArr );
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
    myPic.draw();
   getch();


   return 0;
}
