#include <iostream>
using namespace std;

void printName(string name)
{
    for (int i = 0; i < 5; i++)
    {
        cout << name << endl;
    }
}

int main()
{
    string name;
    cin >> name;
    printName(name);
    return 0;
}

