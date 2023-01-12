#include <iostream>
#include "SecondDerived.h"
#include "Derived.h"

using namespace std;

int main()
{
    Base *B =new Base(2,3);
    delete B;
    Derived *D =new Derived(2,3,1);
    delete D;


    SecondDerived sd(3,2,4,3);
    cout <<"-----second-----"<< endl;
    cout<<sd.product()<< endl; //second

    cout <<"-----Derived------" << endl;
    cout<<sd.Derived::product()<< endl; // Derived
    Derived *d = &sd;
    cout<<d ->product()<< endl;

    cout <<"-----Base------" << endl;
    cout<<sd.Base::product()<< endl; // Base
   // cout<<obj ->product()<< endl; // Base


    return 0;
}
