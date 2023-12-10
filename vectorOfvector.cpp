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
    return 0;
}