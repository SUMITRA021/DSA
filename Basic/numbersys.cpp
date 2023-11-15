#include <iostream>
#include<math.h>
using namespace std;


// deciaml to binary - divide method

// int decimalTobinary(int n)
// {
//     int binaryNo = 0;
//     int i = 0;
//     while (n > 0){
//         int bit = n % 2;
//         binaryNo = bit * pow(10, i++) + binaryNo;
//         n = n / 2;}

//     cout << binaryNo << endl;
// }


//Binary to decimal

int BinaryTodecinal(int n)
{
    int decimal = 0;
    int i = 0;
    while(n)
    {
        int bit= n % 10;
        decimal = decimal + bit * pow(2, i++);
        n = n / 10;
    }
    cout << decimal << endl;
}




//Decimal to binary - bitwise method
// int decimalTobinaryMethod2(int n)
// {
//     int binaryNo = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int bit = (n & 1);
//         binaryNo = bit * pow(10, i++) + binaryNo;
//         n = n >> 1;
//     }

//     cout << binaryNo << endl;
// }

int main()
{
    int n;
    cout << "Enter value of n" << endl;
    cin >> n;
    // int binary = decimalTobinary(n);
    int decimal = BinaryTodecinal(n);
    return 0;
}
