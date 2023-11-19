#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int &k = n;  //k is a reference variable of n -- k is nickname of n
    int &c = n;  // c is a reference variable of c -- k is nickname of n
    cout <<"n:" << n << endl;
    cout << "k:" << k << endl;
    cout << "c:" << c << endl;

    k++;

    cout << "n:" << n << endl;
    cout << "k:" << k << endl;
    cout << "c:" << c << endl;

    //int &t = 7; -- error here - t can refer a variable not a constant

    return 0;
}