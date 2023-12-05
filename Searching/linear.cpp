#include<iostream>
#include<vector>
using namespace std;


void linearSearch(vector<int>arr,int target)
{
    int flag = 0;
    for (int i = 0; i < arr.size();i++)
    {
        if(arr[i]==target)
            flag = 1;
            

        else
            continue;
    }
    if(flag==1)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
}


int main()
{
    vector<int> arr;
    int n;
    int target;
    int a;

    cout << "Enter n value" << endl;
    cin >> n;
    
    cout << "Enter array value:" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "enter target:" << endl;
    cin >> target;

    linearSearch(arr, target);

    return 0;
}