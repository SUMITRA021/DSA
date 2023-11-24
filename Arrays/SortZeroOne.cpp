#include<iostream>
using namespace std;

void sortZeroOne(int arr[],int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size;i++)
    {
        if(arr[i]==0)
        {
            zeroCount++;
        }
        else
        {
            oneCount++;
        }
    }

    // int i;
    // for (i = 0; i < zeroCount;i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int j = i; j < size;j++)
    // {
    //     arr[j] = 1;
    // }

    int index = 0;
    while(zeroCount--)
    {
        arr[index] = 0;
        index++;
    }
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
    

    for (int k = 0; k < size; k++)
    {
        cout << arr[k]<<" ";
    }
}


int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int size = 9;
    sortZeroOne(arr, size);
    return 0;
}