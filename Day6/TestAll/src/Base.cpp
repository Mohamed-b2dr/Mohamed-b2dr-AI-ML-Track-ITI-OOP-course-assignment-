#include "Base.h"
#include <iostream>
#include "Base.h"

using namespace std;

Base::Base()
{
    cout <<"you create object Base by default constructor" << endl;
}

Base::Base(int m, int n)
{
    a = m;
    b = m;
    cout <<"you create object Base by constructor" << endl;
}
Base::~Base()
{
     cout <<"you destructor object Base" << endl;
}

int Base:: product ()
    {

        return a*b;
    }

int Base::getA()
    {
        return a;
    }

int Base::getB()
    {
        return b;
    }

void Base::setA(int m)
    {
        a = m;
    }
void Base :: setB(int n)
    {
        b =n;
    }
