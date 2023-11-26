#include<iostream>
#include<vector>
using namespace std;



int main()
{

    //2D array
    vector<vector<int>> arr;

    vector<int> vec1(10, 2);
    vector<int> vec2(8, 4);
    vector<int> vec3(6, 6);
    vector<int> vec4(4, 8);
    vector<int> vec5(2, 10 );

    arr.push_back(vec1);
    arr.push_back(vec2);
    arr.push_back(vec3);
    arr.push_back(vec4);
    arr.push_back(vec5);


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