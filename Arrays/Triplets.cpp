#include<iostream>
using namespace std;

void PrintTriplet(int arr[],int size)
{
    for (int i = 0; i < size;i++)
    {
        for (int j = 0; j < size;j++)
        {
            for (int k = 0; k < size;k++)
            {
                cout << arr[i] <<", "<< arr[j] <<", "<<arr[k]<<endl;
            }
        }
    }

    // cout << "---------other-------------------" << endl;

    // for (int i = 0; i < size;i++)
    // {
    //     for (int j = i; j < size;j++)
    //     {
    //         cout << arr[i] <<", "<< arr[j] <<endl;
    //     }
    // }
}


int main()
{
    int arr[] = {1,2,3,4};
    int size = 4;
    PrintTriplet(arr, size);
    return 0;
}