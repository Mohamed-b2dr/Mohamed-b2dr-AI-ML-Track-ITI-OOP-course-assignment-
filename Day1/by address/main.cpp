#include <iostream>

using namespace std;

void Swap (float *num1, float *num2)
    {
        float temp;
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

int main()
{
    float num1, num2;
    cout << "Enter First Num \n";
    cin >> num1;

    cout << "Enter Second Num \n";
    cin >> num2;

    cout << "Before Swap "<< num1 << " "<< num2 <<"\n";

    Swap(&num1, &num2);
    cout << "After Swap "<< num1 <<" "<<num2 <<"\n";
    return 0;
}
