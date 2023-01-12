#ifndef SECONDDERIVED_H
#define SECONDDERIVED_H
#include "Derived.h"

class SecondDerived : public Derived
{
    public:
         SecondDerived();
        ~SecondDerived();
         SecondDerived(int x, int y, int m, int z);
         int product();
         int getD();
         void setD();

    private:
        int d;
};

#endif // SECONDDERIVED_H
