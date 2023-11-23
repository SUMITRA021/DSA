#include<iostream>
#include<limits.h>
using namespace std;

int MinNum(int arr[],int size)
{
    int min = INT_MAX;
    for (int i= 0; i <size; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout <<"MIN:"<< min << endl;
}


int MaxNum(int arr[],int size)
{
    int max = INT_MIN;
    for (int i= 0; i <size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout <<"MAX:"<< max << endl;
}


int main()
{
    int arr[] = {10, 8, 31, 4, 3, 1, 51};
    int size = 7;

    MinNum(arr, size);
    MaxNum(arr, size);

    cout << INT_MIN << endl;
    cout << INT_MAX  << endl;
    return 0;
}