#include<iostream>
using namespace std;

int main()
{


//Arithematic operator - '+','-','*','/'
    int op1 = 5;
    int op2 = 10;
    cout << op1 + op2 << endl;
    cout << op1 - op2 << endl;
    cout << op1 * op2 << endl;
    cout << op2 / op1 << endl;
    cout << (3/2) << endl;


//Relational operator - '>','<','>=','<='
    int operator1 = 20;
    int operator2 = 10;
    cout << (operator1 > operator2) << endl;
    cout << (operator1 < operator2) << endl;
    cout << (operator1 >= operator2) << endl;
    cout << (operator1 <= operator2) << endl;


//Assignment operator - "==","!="
    cout << (operator1 == operator2) << endl;
    cout << (operator1 != operator2) << endl;


//Logical operator - "&&","||","!"

    int age = 27;
    int car = 0;

//AND - Both  option have to be true   
    if(age>=18 && car>=1)
        cout << "You will get licence" << endl;
    else
        cout << "You will not get" << endl;

//OR - Any one statemnet if true then result is true
    if (age >= 18 || car >= 1)
        cout << "You will get licence" << endl;
    else
        cout << "You will not get" << endl;

//NOT
    cout << (!car) << endl;


}