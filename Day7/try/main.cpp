#include <iostream>

using namespace std;

class pokemon{
    public:
        pokemon(){cout <<"default parent"<<endl;}
};

class MewTwo : public pokemon {
    public:
        MewTwo(){cout <<"child"<<endl; }
};

int main()
{
    MewTwo();
     MewTwo arr[3] = {MewTwo()};
    return 0;
}
