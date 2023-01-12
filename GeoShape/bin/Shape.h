#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape();
        Shape(float num);
        Shape(float num1, float num2);
        ~Shape();

        void setDim1(float num);
        void setDim2(float num);

        float getDim1();
        float getDim2();

        virtual float calculateArea() =0 ;
    protected:
        float dim1;
        float dim2;

};

#endif // SHAPE_H
