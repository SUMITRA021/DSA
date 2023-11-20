#include <iostream>
using namespace std;

int main()
{
    int arr[101];
   

    char ch[102];
    bool flags[191];
    long num[900];
    short nunm[1000];
    cout << "array" << endl;

    int a = 5;
    cout << "Address of a:" << &a << endl;

    // arr and &arr gives same value

    cout << "Base address of arr:" << arr << endl;
    cout << "Base address of arr:" << &arr << endl;

    cout << "size of a:" << sizeof(a) << endl;
    cout << "size of arr:" << sizeof(arr) << endl;

    return 0;
}