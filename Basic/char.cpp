//If character stores more value than its limits -- it will throw warning as overflow and code exits with random number.

// char.cpp:9:15: warning: character constant too long for its type
//      char ch = '234112';
// char.cpp : In function 'int main()' : 
// char.cpp : 9 : 15 : warning : overflow in implicit constant conversion[-Woverflow] 
// 2

#include <iostream>
 using namespace std;

int main()
{
    char ch = '234112';
    cout << ch << endl;
    return 0;
}