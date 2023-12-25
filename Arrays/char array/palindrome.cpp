#include<iostream>
#include<string.h>
using namespace std;


bool checkPalidrome(char ch[],int size)
{
    int left = 0;
    int right = size - 1;
    while(left<=right)
    {
        if(ch[left]==ch[right]){
            left++;
            right--;}
        else 
            return false;
    }

    return true;
}


int main()
{
    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    int val = checkPalidrome(ch, len);
    if (val == true)
        cout<< "Palindrome";
    else 
        cout << "Not Palindrome";
    return 0;
} 