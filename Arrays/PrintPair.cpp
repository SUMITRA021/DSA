#include<iostream>
using namespace std;

void PrintPair(int arr[],int size)
{
    for (int i = 0; i < size;i++)
    {
        for (int j = 0; j < size;j++)
        {
            cout << arr[i] <<", "<< arr[j] <<endl;
        }
    }

    cout << "---------other-------------------" << endl;

    for (int i = 0; i < size;i++)
    {
        for (int j = i; j < size;j++)
        {
            cout << arr[i] <<", "<< arr[j] <<endl;
        }
    }
}


int main()
{
    int arr[] = {10, 20, 30};
    int size = 3;
    PrintPair(arr, size);
    return 0;
}