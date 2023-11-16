//coder do the conversion manually

#include <iostream>
using namespace std;

int main()
{
    //float to int
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2;  // ()-> casting operator
    cout << result << endl;


    //float to char
    float f1 = 65.35;
    char ch = char(f1);
    cout << ch << endl;

    return 0;
}