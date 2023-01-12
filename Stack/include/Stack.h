#ifndef STACK_H
#define STACK_H
using namespace std;




template <typename T>
class Stack{

    private:
        int top;
        int Size;
        T *st;



    public:
        Stack(int n)
            {

                top = 0;
                Size = n;
                st = new T[Size];

                cout << "This Constructor of stack object with size " <<n<< endl;
           }

        ~Stack()
            {

            delete []st;
            cout << "this is the destructor " <<  Size << endl;

            }
        Stack ( Stack &temp)
            {

                top = temp.top;
                Size = temp.Size;
                st = new T [Size];
                for(int i=0 ; i< top; i++ )
                    st [i] = temp.st [i] ;
                cout <<"this object create by copy constructor " << Size << endl;
            }
        void push(T num)
            {
                if (top == Size)
                    {
                        cout <<"Stack is full"<< endl;
                    }
                else
                    {
                       st[top] = num;
                       top++;
                    }
            }
        T pop()
            {
                int retval;
                if (top == 0)
                    {
                        cout << "Stack is Empty"<<endl;
                        retval = -1;
                    }
                else
                    {
                        top--;
                        retval = st[top];
                    }

                return retval;
                }

        void print()
            {
               if (top == 0){
                cout << "Empty Stack"<<endl;
               }
               else {
               int i;
               for (i=0; i<top; i++){
                cout << st[i]<<endl;
               }
               }
            }




        void operator = (const Stack &c)
            {
                delete[] this-> st;
                top = c.top;
                Size = c.Size;
                st = new T [Size];
                for(int i=0 ; i< top; i++ )
                    st [i] = c.st [i] ;
            }
        friend void viewContent ( Stack <T>  s);


 };

void viewContent (Stack s) {
                int t = s.top;
                while ( t != 0 )
                cout<< s.st [--t] << endl;
            }
#endif // STACK_H
