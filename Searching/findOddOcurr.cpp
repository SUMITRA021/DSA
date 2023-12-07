#include<iostream>
using namespace std;

int oddOccureNumber(int arr[],int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while(s<=e)
    {
        if(s==e)
            return e;
        else if(mid&1) //mid&1 --> true means odd number
        {
            if(mid-1>=0 && arr[mid-1]==arr[mid])
                s = mid + 1;
            else
                e = mid - 1;
        }
        else
        {   
            if(mid+1<n && arr[mid]==arr[mid+1])
                s = mid + 2;//mid+! already checked that's why mid+2
            else
                e = mid;
        }

        mid = s + (e - s) / 2;
        } 
    return -1;
}

int main()
{
    int arr[] = {10,10,2,2,3,3,5,5,6,6,7,7,110};
    int n = 13;
    int res = oddOccureNumber(arr,n);
    cout << "Odd Number:" << arr[res] << endl;
    return 0;
}