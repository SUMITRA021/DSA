#include<iostream>
using namespace std;


void shiftByOne(int arr[],int size)
{
    int tmp = arr[size - 1];
    for (int i = size-1; i >0;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = tmp;

    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    shiftByOne(arr, size);
    return 0;
}