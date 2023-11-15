#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= 10;i++)
        {
            int val = n * i;
            cout <<n<<"*"<<i<<"="<< val << endl;
        }
        return 0;
}