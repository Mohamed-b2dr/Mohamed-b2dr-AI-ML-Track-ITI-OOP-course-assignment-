#include <iostream>
#include "Triangle.h"
#include "Rect.h"
#include "Square.h"
#include "Circle.h"
#include "Shape.h"
using namespace std;

float calculateSum(Triangle &T, Rect &R,  Square &S, Circle &C )
{
    float sum =0;
    sum = T.calculateArea() + R.calculateArea() + S.calculateArea()+ C.calculateArea();

    return sum;
}

float calculateSumS(Shape &T, Shape &R,  Shape &S, Shape &C )
{
    float sum =0;
    sum = T.calculateArea() + R.calculateArea() + S.calculateArea()+ C.calculateArea();

    return sum;
}

int main()
{

    cout <<"Test All cases Triangle" << endl;
    Triangle T(12,6);
    cout<<"Dim1 for Triangle is  " <<T.getDim1() << endl;
    cout<<"Dim2 for Triangle is  " << T.getDim2() << endl;
    T.setDim1(3); //from parent because Type of is public
    T.setDim2(6); // from parent because Type of is public
    cout<<"Area for Triangle is  " << T.calculateArea() << endl;

    cout << endl<<"Test All cases Rect" << endl;
    Rect R(10,5);
    cout<<"Dim1 for Rect is  " <<R.getDim1() << endl;
    cout<<"Dim2 for Rect is  " << R.getDim2() << endl;
    R.setDim1(3); //from parent because Type of is public
    R.setDim2(6); // from parent because Type of is public
    cout<<"Area for Rect is  " << R.calculateArea() << endl;

    cout << endl<<"Test All cases Square" << endl;
    Square S(5);
    //S.getDim1() //Not allow private
    //S.getDim2() //Not allow private
    cout<<"SquareDim for Square is  " << S.getRaduis() << endl;
     //S.setDim1(3); //Not allow private
    //S.setDim2(6); //Not allow private
    S.setRaduis(10);
    cout<<"Area for Square is  " << S.calculateArea() << endl;


    cout << endl<<"Test All cases Circle" << endl;
    Circle C(20);
    //C.getDim1() //Not allow private
    //C.getDim2() //Not allow private
    cout<<"SquareDim for Circle is  " << C.getCircleDim() << endl;
     //C.setDim1(3); //Not allow private
    //C.setDim2(6); //Not allow private
    C.setCircleDim(10);
    cout<<"Area for Circle is  " << C.calculateArea() << endl;

    cout << endl<<"Total sum for all Shapes" << endl;

    float sum;
    sum = calculateSum(T ,R, S, C);
    cout << "Total sum for all Shapes is " << sum << endl;

    cout << endl<<"Total sum for all Shapes Casting to parent" << endl;
    //sum = calculateSumS(T, R, S, C ) //Error in c, S calculateSumS in child can not access
    sum = calculateSumS(T ,R, S, C ); // zero
    cout << "Total sum for all Shapes is " << sum << endl;
    return 0;
}
