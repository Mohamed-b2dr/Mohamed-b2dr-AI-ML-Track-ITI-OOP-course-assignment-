#ifndef BASE_H
#define BASE_H


class Base
{

    private:
        int a;
    public:
        Base();
        Base (int m, int n);
        ~Base();
        int product();

        int getA();
        int getB();

        void setA(int m);
        void setB(int n);


    protected:
        int b;

};

#endif // BASE_H
