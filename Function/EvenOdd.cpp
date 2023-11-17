#include <iostream>
using namespace std;

void EvenOdd(int number)
{
    if (number % 2 == 0)
        cout << "even" << endl;
    else
        cout << "Odd" << endl;
}

int main()
{
    int n;
    cin >> n;
    EvenOdd(n);
    return 0;
}