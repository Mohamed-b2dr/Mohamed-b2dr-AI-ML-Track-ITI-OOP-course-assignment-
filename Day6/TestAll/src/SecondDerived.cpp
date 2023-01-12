#include "SecondDerived.h"
#include "Derived.h"
SecondDerived::SecondDerived()
{
    cout << "create object second derivded using default" << endl;
}

SecondDerived::~SecondDerived()
{
    cout << "you destructor object second derivded" << endl;
}

SecondDerived:: SecondDerived(int x, int y,int m, int z):Derived(x, y,m)
    {
        d =z;
        cout << "create object second derivded" << endl;
    }

int SecondDerived:: product()
    {
        // return a*b*c*d; error  b,c private
        // return a* getB()*getC()*d;
        return Derived::product()*d;
    }
