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
    cout << "---------------------------" << endl;
    cout << (~b) << endl;
    cout << ~(b) << endl;
    cout << (~n) << endl;
    cout << (a ^ b) << endl;


//left and right shift

    int a1 = 7;
    cout << (a1 << 1) << endl;
    cout << (a1 << 2) << endl;
    cout << (a1 << 3) << endl;

    int a2 = 50;
    cout << (a2 >> 1) << endl;
    cout << (a2 >> 2) << endl;
    cout << (a2 >> 3) << endl;

    int n1 = -100;
    cout << (n1 >> 1) << endl;

    unsigned int n2 = -100;
    cout << (n2 >> 1) << endl;

    int n3 = 10;
    cout << (n3 << -1)<<endl;

    return 0;
}