#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n;row++)
    {
        char ch;
        for (int col = 0; col <row+1;col++)
        {
            int num = col + 1;
            ch = num + 'A' - 1;
            cout << ch;
        }
        for (char alp = ch; alp > 'A';)
        {
            alp = alp - 1;
            cout << alp;
        }
            cout << endl;
    }
        return 0;
}