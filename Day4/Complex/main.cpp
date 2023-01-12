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


            Complex();
            Complex(float r, float i);
            Complex(float ri);

            ~Complex();

            void setComplex( float r, float i);
            void setComplex( float ri);

            Complex operator + ( const Complex & c);
            Complex operator - (const Complex & c);
            int operator == (Complex & c);
            Complex operator += (const Complex & c);
            Complex operator -= (const Complex & c);

            Complex operator ++ ();
            Complex operator ++ (int);
            operator float();

            friend Complex operator + (float v,const Complex & c);
            friend Complex operator - (float v,const Complex & c);


    };
Complex :: Complex()
    {
        real = img = 0;
    }
Complex :: Complex(float r, float i)
    {
        real = r;
        img = i;
    }
Complex :: Complex(float ri)
    {
        real = img = ri;
    }



Complex :: ~Complex()
    {
       cout << "the object destructor" << endl;
    }

void Complex :: setComplex(float r, float i)
    {
        real = r;
        img = i;
    }
void Complex :: setComplex(float ri)
    {
        real = img = ri;
    }

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

Complex Complex :: operator + (const Complex& c){
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;

    return  temp;
}

Complex  Complex :: operator - ( const Complex & c){
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;

    return temp;
}

Complex Complex :: operator += (const Complex & c){

    real = real + c.real;
    img = img + c.img;

    return *this;
}

Complex  Complex :: operator -= (const Complex & c){

    real = real - c.real;
    img = img - c.img;

    return  *this;
}

int Complex :: operator == (Complex & c)
    {
      if (real == c.real && img == c.img){return 1;}
      else{return 0;}
    }

Complex Complex :: operator ++ ()
    {
        real++;

        return *this;
    }
Complex Complex :: operator ++ (int)
    {
        Complex temp = *this;
        real++;

        return temp;
    }
Complex :: operator float()
{
    return real;
}




Complex operator + (float v,const Complex & c)
    {
        Complex temp;
        temp.real = c.real + v;
        temp.img = c.img;

        return temp;
    }
Complex  operator - (float v, const Complex & c)
    {
        Complex temp;
        temp.real = c.real - v;
        temp.img = c.img;

        return temp;
    }


int main()
{   Complex c1(2,3);
    Complex c2(3,5);
    cout<<"--------------c1-------------"<< endl;
    c1.print();
    cout<<"--------------c2-------------"<< endl;
    c2.print();
    Complex c3;
    c3 = c1 + c2;
    cout<<"--------------add-------------"<< endl;
    c3.print();
    cout<<"--------------sub-------------"<< endl;
    c3 = c1 - c2;
    c3.print();
    cout<<"--------------add float 5 to c1 -------------"<< endl;
    c3 = 5 + c1;
    c3.print();
    cout<<"--------------sub float 5 to c1 -------------"<< endl;
    c3 = 5 -  c1;
    c3.print();
    cout<<"-------------- == -------------"<< endl;

    if (c1 == c2)
        {cout <<"equal"<< endl;}
    else
    {cout <<"not equal"<<endl;}

    cout<<"-------------- add c2 to c1 -------------"<< endl;
    c1 += c2;
    c1.print();
    cout<<"-------------- prefix -------------"<< endl;
    Complex c = ++c1;
    cout <<c.getReal()<< endl;
    cout<<"-------------- postfix -------------"<< endl;
    Complex c4 = c1++;
    cout << c4.getReal()<< endl;
    cout<<"-------------- casting c1 -------------"<< endl;
    cout << (float) c1<< endl;


    return 0;
}
