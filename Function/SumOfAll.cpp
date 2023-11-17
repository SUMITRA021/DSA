#include <iostream>
using namespace std;


void Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n;i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    Sum(n);
    return 0;
}