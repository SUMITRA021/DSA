#include<iostream>
#include<string.h>
using namespace std;


void reverseString(char ch[],int size)
{
    int left = 0;
    int right = size - 1;
    while(left<=right)
    {
        swap(ch[left], ch[right]);
        left++;
        right--;
    }
}

int main()
{
    char ch[100];
    cin >> ch;
    cout << "Before reverse:" << ch << endl;
    int len = strlen(ch);
    reverseString(ch, len);
    cout << "Reverse String:" << ch;
    return 0;
}