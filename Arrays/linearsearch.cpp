#include<iostream>
using namespace std;



int main()
{
    int n;
    int target, arr[20];
    cout << "Enter n" << endl;
    cin >> n;
    cout << "enter array element" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    cout << "Target:" << endl;
    cin >> target;
    
    for (int i = 0; i < n;i++)
    {
        if(arr[i]==target)
        {
            cout << "Target found" << endl;
            break;
        }
        
    }
        return 0;
}