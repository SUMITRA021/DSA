#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

void print(vector<vector<int>> &v) {
//
for (int i = 0; i < v.size();i++)
{
    vector<int> &temp = v[i];
    int a = temp[0];
    int b = temp[1];
    cout << a << " " << b << endl;
}
  cout << endl;
}

bool mycomp(vector<int>&a,vector<int>&b)
{
    //return a[0]<b[0] ---- sort wrt index 0
    return a[1] < b[1]; // --sort wrt index 1 in inc order
    //return a[1] > b[1]; // --sort wrt index 1 in dec order
}



int main() {
    vector<vector<int>> v;
    int n, a, b;
    cout << "enter n value:" << endl;
    cin >> n;
    for (int i = 0; i < n;i++){
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
    }
    cout << "Vector of vector" << endl;
    print(v);

    // //Normal sort
    // cout << "Sort Normal:" << endl;
    // sort(v.begin(), v.end());
    // print(v);


    
    //sort with respect to second index
    cout << "Sort with respect to second index:" << endl;
    sort(v.begin(), v.end(),mycomp);
    print(v);

    return 0;
}