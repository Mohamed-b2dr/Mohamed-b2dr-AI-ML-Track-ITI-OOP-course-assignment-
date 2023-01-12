#include <iostream>
#include <MyLibrary.h>
#define NORMALCOLOR 0X07
#define LIGHTCOLOR 0X70
#define UP 72
#define DOWN 80
#define HOME  71
#define END  79
#include <conio.h>


using namespace std;
class Stack{

    private:
        int top;
        int Size;
        int *st;


    public:
        Stack(int n);
        ~Stack();
        void push(int num);
        int pop();
        void print();

 };
Stack::Stack(int n=10)
     {

        top = 0;
        Size = n;
        st = new int[Size];

        cout << "This Constructor of stack object with size " <<n<< endl;
     }
Stack::~Stack()
    {
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




int main()
{
    char menu[3][8] = {"PUSH", "POP", "Print"};
    int Size;
    cout<< "Enter Length of stack"<< endl;
    cin >> Size;
    Stack s(Size);
    int num;
    char ch, ch2;
    int i;
    int position=0;
    int enter =0;
    clrscr();
    gotoxy(10, 0);
    cout<<"MENU\n  "<< endl;


do{

    for(i=0; i< 3; i++){

                gotoxy(14, (i+1)*3);

                if (i == position){

                    textattr(LIGHTCOLOR);
                }
                else{

                     textattr(NORMALCOLOR);
                }
                if (enter == 0)
                    {

               cout << menu[i]<<endl;}
                else{}

            }


    ch = getch();



     switch(ch){

        case 9:
            ++position;
            if (position > 2){position = 0;}
            break;

        case 13:
            if (enter == 0){
                enter++;
                switch(position){
                    case 0:
                        clrscr();
                        cout<<"Enter Number for PUSH "<<endl;
                        cin >> num;
                        s.push(num);
                        cout << "Press Enter to Back Home "<< endl;
                        position = 0;
                        break;
                    case 1:

                        clrscr();
                        cout << "retval is " << s.pop()<< endl;
                        cout << "Press Enter to Back Home "<< endl;
                        position = 0;
                        break;

                    case 2:
                        textattr(NORMALCOLOR);
                        clrscr();
                        cout << "Elements of Stack is "<< endl;
                        s.print();
                        cout <<"Press Enter to Back Home  "<< endl;
                        position = 0;
                        break;

                }
            }
            else{
                        enter=0;
                        position =0;
                        clrscr();
                        gotoxy(10, 0);
                        cout <<"MENU\n  "<< endl;};
            break;

        case 27:
                exit(0);
                break;

        case -32:
            ch2 = getch();
            switch(ch2){
                case END:
                    position = 2;
                    break;
                case UP:
                    position--;
                    if(position < 0){
                        position = 2;
                    }
                    break;
                case 80:
                    position++;
                    if(position > 2){
                        position = 0;
                    }
                    break;

                case HOME:
                    position=0;
                    break;
                break;

        default:
                        enter=0;
                        position =0;
                        clrscr();
                        gotoxy(10, 0);
                        cout<<"MENU" << endl;

        }}}while(1);









    return 0;
}

