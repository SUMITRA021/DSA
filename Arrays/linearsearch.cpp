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

    bool flag = 0; // 0 ->not found, 1->found


    for (int i = 0; i < n;i++)
    {
        if(arr[i]==target)
        {
            flag = 1;
            break;
        }
        
    }

    if(flag == 1)
    {
        cout << "Target found" << endl;
           
    }
    else{
        cout << "Not found";
    }
    return 0;
}