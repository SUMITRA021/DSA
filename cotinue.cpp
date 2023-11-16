#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5;i++)
    {
        if(i==1)
            continue;
        cout << i << endl;
    }
    cout << "-----------------Break------------------" << endl;
    for (int j = 0; j < 5; j++)
    {
        if (j == 2)
            break;;
        cout << j << endl;
    }
        return 0;
}