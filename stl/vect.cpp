#include<iostream>
#include<vector>
using namespace std;



int main()
{
    // int arr[5];
    // vector<int> v(5);

    // cout << v.size()<<endl;
    // cout << v.empty() << endl;


    //2D array
    vector<vector<int>> arr(5, vector<int>(10, -1 ));

    //In 2D array n row size -> arr.size()
    for (int i = 0; i <arr.size() ;i++)
    {
        for (int j = 0; j <arr[i].size();j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}