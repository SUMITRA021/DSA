#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

void print(vector<int> &v) {
//   
for(auto it :v)
{
    cout << it << " ";
}
  cout << endl;
}

bool mycomp(int &a, int &b)
{
    //return a < b; ///inc order sorting
    return a > b; ///dec order sorting
}


int main() {
  vector<int> v = {44,33,55,22,11};
  //sort(v.begin(), v.end()); //inc order sorting
  sort(v.begin(), v.end(), mycomp);  //dec order sorting
  print(v);
  return 0;
}