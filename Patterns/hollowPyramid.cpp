#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        //space
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        //stars
        for (int col = 0; col < row + 1; col++)
        {
            if(col == 0  ||  col== row + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  "; //double space
            }
        }
        cout << endl;
    }
}