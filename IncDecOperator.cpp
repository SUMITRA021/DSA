#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 5;
    int c = 4;
    cout << (++a) << endl;
    cout << (b++) << endl;
    cout << b << endl;
    cout << c << endl;
    cout << (++c) * 10 << endl;
    cout << (c++) * 10 << endl;
    cout << c << endl;

    int n = 10;
    cout << ((++n) * (n++)) << endl;

    return 0;
}