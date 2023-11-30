#include<iostream>
using namespace std;

void sortArray(int arr[],int n)
{
    int index, j=0;
    for (index = 0; index < n;index++)
    {
        if(arr[index]<0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
        else{
            continue;
        }
    }
}

int main()
{
    int arr[]={23,-7,12,-10,-11,40,60};
    int n = 7;
    

    sortArray(arr, n);
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] <<", ";
    }
    return 0;
}