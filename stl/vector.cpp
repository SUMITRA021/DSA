#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v)
{
    int size = v.size();
    for (int i = 0; i < size;i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    vector<int> v;
    // while(1){
    // int n;
    // cout << "Enter n value\n";
    // cin >> n;
    
    // v.push_back(n);
    // cout << "Capacity:" << v.capacity() << " "
    //      << "size:" << v.size() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);

    v.pop_back();
    print(v);


    //clear the vector
    v.clear();
    cout << "size:" << v.size() << endl;
    cout << "capacity:" << v.capacity() << endl;
    v.push_back(90);
    cout << "size:" << v.size() << endl;
    cout << "capacity:" << v.capacity() << endl;
    print(v);
}