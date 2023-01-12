#include "Derived.h"
#include <iostream>
#include "Base.h"
using namespace std;

Derived::Derived():Base()
{
    cout << "you create object Derived by using default constructor" << endl;
}

Derived::~Derived()
{
      cout << "you destructor object Derived" << endl;
}
Derived:: Derived(int a, int b, int n):Base(a,b)
    {
        c = n;
         cout << "you create object Derived" << endl;
    }

int Derived:: product()
    {
        // return a*b*c; error  b private
        // return a* getB()*c;
        return Base::product()*c;
    }
