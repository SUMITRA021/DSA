#include <iostream>
using namespace std;

int main()
{
    int op,a,b;
    cout << "Enter value of a and b " << endl;
    cin >> a >>b;
    cout << "Options are :" << endl;
    cout << "1.Add"
         << "\n"
         << "2.Sub"
         << "\n"
         << "3.Mul\n"
         << "4.Div" << endl;
    cout << "What operation you want to do? " << endl;
    cin >> op;
    float ans = 0;

    switch(op)
    {
        case 1:
            ans = a + b;
            cout << ans<<endl;
            break;
        case 2:
            ans = a - b;
            cout << ans << endl;
            break;
        case 3:
            ans = a * b;
            cout << ans << endl;
            break;
        case 4:
            ans = a / b;
            cout << ans << endl;
            break;
        default:
            cout << "Invalid option\n";
            return 0;
    }
    return 0;
}