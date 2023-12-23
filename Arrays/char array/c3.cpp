#include<iostream>
#include<string.h>
using namespace std;

void LowerToUpperCase(char ch[],int size)
{
    int index = 0;
    while(ch[index]!='\0')
    {
        char currCharacter = ch[index];
        //if lowercase convert if not keep as it is
        if(currCharacter >='a' && currCharacter<='z')
            ch[index] = currCharacter - 'a' + 'A';
        index++;
    }
}

void UpperToLowerCase(char ch[],int size)
{
    int index = 0;
    while(ch[index]!='\0')
    {
        char currCharacter = ch[index];
        //if lowercase convert if not keep as it is
        if(currCharacter >='A' && currCharacter<='Z')
            ch[index] = currCharacter - 'A' + 'a';
        index++;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch,100);
    cout << "Before:" << ch <<endl;
    //int len = strlen(ch);
    LowerToUpperCase(ch, 100);
    cout << "After:" << ch<<endl;

    UpperToLowerCase(ch, 100);
    cout << "LOWER Print: "<<ch;
        return 0;
}