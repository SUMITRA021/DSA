#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while(s<=e)
    {
        if(arr[mid]==target)
            return mid;
        else if(target>arr[mid])
            s = mid + 1;
        else if(target<arr[mid])
            e = mid - 1;
        

        //mid update -- here we will make mistake
        mid = (s + e) / 2;
    }


    //here means element not found
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = 8;
    int target;
    cout << "Enter target" << endl;
    cin >> target;
    int indexA=binarySearch(arr, n,target);
    
    if(indexA==-1)
        cout << "Not found\n";
    else
        cout << "Found" << " "<<indexA << endl;

    return 0;
}