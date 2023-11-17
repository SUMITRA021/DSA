#include <iostream>
using namespace std;

void AddTwoNumber(int number1,int number2 )
{
    int sum = 0;
    sum = number1 + number2;
    cout << sum << endl;
}


int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    AddTwoNumber(num1, num2);
    return 0;
}