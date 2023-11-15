#include <iostream>
using namespace std;

int main()
{
    int side;
    cout << "Enter value" << endl;
    cin >> side;
    if (side == 3)
        cout << "Triangle" << endl;
    else if (side == 4)
        cout << "Rectangle" << endl;
    else if (side == 5)
        cout << "Pentagone" << endl;
    else
        cout << "Not Applicable" << endl;
    return 0;
}