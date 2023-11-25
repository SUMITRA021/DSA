#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v)
{
    int size = v.size();
    for (int i = 0; i < size;i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
}
void print(vector<char>v)
{
    int size = v.size();
    for (int i = 0; i < size;i++)
    {
        cout << v[i] <<" ";
    }
    cout << endl;
}

//another way to print vector
void print2(vector<int>v)
{
    //for each loop
    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int>arr;         //default with no data, 0 size
    vector<int> arr2(5, -1); // initialize with n size and specific value
    arr2.push_back(50);
    print(arr2);


//Possible after c++11 
    vector<int> arr3 = {1, 2, 34, 56, 6};
    print(arr3);

    vector<int> arr4{3, 6, 9, 12, 15};
    print(arr4);
    
    //copy vector
    vector<int> arr5(arr4);
    cout << "ARR5:" << endl;
    print2(arr5);

    //char vector

    vector<char> ch;
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('d');
    print(ch);

    cout << ch.front() << endl;
    
    cout<<ch.back()<<endl;
}