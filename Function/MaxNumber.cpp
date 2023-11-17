#include <iostream>
using namespace std;

void MaxNumber(int a,int b,int c)
{
    if(a>=b && a>=c)
        cout << "A is max" << endl;
    else if(b>=a && b>=c)
        cout << "B is Max" << endl;
    else
        cout << "C is max" << endl;
}


int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    MaxNumber(a, b, c);
    return 0;
}