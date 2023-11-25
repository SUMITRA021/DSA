#include<iostream>
using namespace std;


void PrintArray(int arr[],int n)
{
    cout << "Array:" << endl;

    for (int i = 0; i < n;i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    int n;
    cout << "Enter n value:" << endl;
    cin >> n;
    int *arr = new int[n]; //each element would be 0  or garbage
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    PrintArray(arr, n);

    return 0;
}