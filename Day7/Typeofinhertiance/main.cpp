#include <iostream>

using namespace std;

class Base
    {
    public:
        int a;
        Base()
            {
                a = b = c = 0;
                cout << "create object base by default constructor" << endl;
            }
         Base(int x, int y, int z)
            {
                a = x; b = y; c = z;
                cout << "create object base by constructor"<< endl;
            }
        ~Base()
            {
                cout << "you destructor object base "<< endl;
            }
    protected:
        int b;
    private:
        int c;
    };
// public object
class Derviedp : public Base
    {
        public :
            void view ()
            {
                a = 10;
                b = 20;
                //c = 30; // not allowed
            }
    };

// private object
class Derviedpv : private Base
    {
        public :
            void view ()
            {
                a = 10;
                b = 20;
                //c = 30; // not allowed private
            }
    };

// protected object
class Derviedpr : protected Base
    {
        public :
            void view ()
            {
                a = 10;
                b = 20;
                //c = 30; // not allowed private
            }
    };


// public  from parent
class Dervied2p : public Derviedp
    {
        public :
            void view ()
            {
                a = 10;
                b = 20;
                //c = 30; // not allowed private
            }
    };


//private  from parent
class Dervied2pv : public Derviedpv
    {
        public :
            void view ()
            {
                //a = 10; //not allowed private
                //b = 20; // not allowed private
                //c = 30; // not allowed private
            }
    };


//protected  from parent
class Dervied2pr : public Derviedpr
    {
        public :
            void view ()
            {
                a = 10; // allowed protected
                b = 20; //  allowed protected
                //c = 30; // not allowed private
            }
    };
int main()
{
    //public object
    Derviedp obj;
    obj.a = 10;  // allowed public
    //obj.b = 20; // not allowed protected
    //obj.c = 30;  // // not allowed private
    obj.view();

    //private object
    Derviedpv obj1;
    //obj1.a = 10;  // not allowed private
    //obj1.b = 20; // not allowed private
    //obj1.c = 30;  // // not allowed private
    obj1.view();


    // protected object
    Derviedpr obj2;
    //obj2.a = 10;  // not allowed protected
    //obj2.b = 20; // not allowed protected
    //obj2.c = 30;  // // not allowed private
    obj2.view();


    // public from parent
    Dervied2p p2;
    p2.a = 10;  // allowed public
    //p2.b = 20; // not allowed protected
    //p2.c = 30;  // // not allowed private
    p2.view();

    //private  from parent
    Dervied2pv pv2;
    //pv2.a = 10;  // not allowed private
    //pv2.b = 20; // not allowed private
    //pv2.c = 30;  // // not allowed private
    pv2.view();

    // protected  from parent
    Dervied2pr pr2;
    //pr2.a = 10;  // not allowed protected
    //pr2.b = 20; // not allowed protected
    //pr2.c = 30;  // // not allowed private
    pr2.view();
    return 0;
}
