#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    int n = 1;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (~a) << endl;
    cout << (~b) << endl;
    cout << (~n) << endl;
    cout << (a ^ b) << endl;
    return 0;
}