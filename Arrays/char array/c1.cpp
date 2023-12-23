#include<iostream>
using namespace std;

int lengthofstring(char ch[], int size)
{
    int index = 0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}

int main()
{
    char ch[100];
    cin >> ch;

    int len = lengthofstring(ch, 100);
    cout << "Printing length:" << len;

    return 0;
}