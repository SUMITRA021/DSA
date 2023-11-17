#include <iostream>
using namespace std;


void countNnumber(int n)
{
    for (int i = 1; i <=n;i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    countNnumber(n);
    return 0;
}