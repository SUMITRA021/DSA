#include<iostream>
using namespace std;

int findoccurance(int arr[],int n,int target)
{
    int s = 0;
    int e = n - 1;
    int val=-1;
    // int mid = (s + e) / 2; -- can be integer overflow
    //best practice
    int mid = s + (e - s) / 2;

    while(s<=e)
    {
        if(arr[mid]==target){
            val=mid;
            e = mid - 1;}
        else if(target>arr[mid])
            s = mid + 1;
        else if(target<arr[mid])
            e = mid - 1;
        //mid update -- here we will make mistake
        mid = (s + e) / 2;
    }


    //here means element not found
    return val;
}

int main()
{
    int arr[] = {10, 30, 30, 30, 30, 30, 70, 80};
    int n = 8;
    int target;
    cout << "Enter target" << endl;
    cin >> target;
    int indexA=findoccurance(arr, n,target);
    
    cout << "Found" << " "<<indexA << endl;

    return 0;
}