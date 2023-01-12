#ifndef DERIVED_H
#define DERIVED_H
#include "Base.h"
#include <iostream>

using namespace std;

class Derived : public Base
{
    public:
        Derived();
        Derived(int a, int b, int n);
        ~Derived();
        int product();

    private:
        int c;
};

#endif // DERIVED_H
