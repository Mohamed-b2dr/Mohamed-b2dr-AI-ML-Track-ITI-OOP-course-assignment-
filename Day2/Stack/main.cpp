#include <iostream>

using namespace std;
class Stack{

    private:
        int top;
        int Size;
        int *st;
        static int counter;


    public:
        Stack(int n);
        ~Stack();
        void push(int num);
        int pop();
        void print();
        static int getCounter();

 };
int Stack::counter =0;
Stack::Stack(int n=10)
     {
        counter++;
        top = 0;
        Size = n;
        st = new int[Size];

        cout << "This Constructor of stack object with size " <<n<< endl;
     }
Stack::~Stack()
    {   counter--;
        delete []st;
        cout << "this is the destructor " << endl;
    }

void Stack::push(int num )
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
int Stack :: pop()
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
void Stack::print()
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

int Stack::getCounter()
    {
        return counter;
    }
int main()
{
     Stack s1 (3);
     s1.push(5);
     s1.push(4);
     s1.push(3);
     s1.push(2);
     cout <<"Elements of stacks"<< endl;
     s1.print();
     cout << "retvalue is" << s1.pop()<< endl;
     cout << "retvalue is" << s1.pop()<< endl;
     cout << "retvalue is" << s1.pop()<< endl;
     cout << "retvalue is" << s1.pop()<< endl;

     Stack s2 (3);
     cout << "counter is "<< s2.getCounter()<< endl;
     s2.print();
    return 0;
}
