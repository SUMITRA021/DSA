#include<iostream>
using namespace std;

int missingNumber(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;
    int val,finl;
    while(s<=e)
    {
        int diff = arr[mid] - mid;
        if(diff==1)
            s = mid + 1;
        else{ 
            val = arr[mid];
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    finl = val - 1;
    return finl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int n = 8;
    int value = missingNumber(arr, n);

    cout << "Missing Number:" << value << endl;

    return 0;
}