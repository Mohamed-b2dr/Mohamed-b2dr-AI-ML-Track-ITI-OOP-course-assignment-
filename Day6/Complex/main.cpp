#include <iostream>

using namespace std;
class Complex
    {
        private:
            float real;
            float img;

        public:
            float getReal();
            float getImg();

            void setReal(float num);
            void setImg(float num);

            void print();

            Complex addComplex(Complex* num);
            Complex subComplex(Complex* num);



    };
float Complex:: getReal()
    {
        return real;
    }

float Complex:: getImg()
    {
        return img;
    }

void Complex:: setReal(float num)
    {
        real = num;
    }

void Complex:: setImg(float num)
    {
        img  = num;
    }
Complex Complex:: addComplex(Complex* num)
    {
        Complex temp;
        temp.setReal(real + num->getReal());
        temp.setImg(img + num->getImg());

        return temp;
    }

Complex Complex:: subComplex(Complex* num)
    {
        Complex temp;
        temp.setReal(real - num->getReal());
        temp.setImg(img - num->getImg());

        return temp;
    }
void Complex:: print()
    {
        if( img < 0)
            {
                cout << real << " - " << -img<<"i"<<endl;
            }
        else
            {
                cout << real << " + " << img<<"i"<<endl;
            }
    }


Complex addComplex(Complex* num1, Complex* num2){

        Complex temp;
        temp.setReal(num1->getReal() + num2->getReal());
        temp.setImg(num1->getImg() + num2->getImg());

 return temp;
}

Complex subComplex(Complex* num1, Complex* num2){

        Complex temp;
        temp.setReal(num1->getReal() - num2->getReal());
        temp.setImg(num1->getImg() - num2->getImg());

 return temp;
}
int main()
{
    Complex *num1 = new  Complex();
    Complex *num2 = new  Complex();
    Complex result;
    float real, img;

    cout << "Enter Real Value ";
    cin >> real;
    cout << "Enter Img Value ";
    cin >> img;
    num1->setReal(real);
    num1->setImg(img);

    cout << "Enter Real Value ";
    cin >> real;
    cout << "Enter Img Value ";
    cin >> img;
    num2->setReal(real);
    num2->setImg(img);
    cout << "First Num"<< endl;
    num1->print();
    cout << "Second Num"<< endl;
    num2->print();



    cout << "Result Add"<< endl;
    result = addComplex(num1,num2);
    result.print();
    cout << "Result Sub"<< endl;
    result = subComplex(num1,num2);
    result.print();
    return 0;
}
