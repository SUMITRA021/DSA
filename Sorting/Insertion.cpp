#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void insertionSort(vector<int>&v)
{
    
}

int main() {
  vector<int> v = {44,33,55,22,11};
  // bubbleSort(v);
  // selectionSort(v);
  //insertionSort(v);
  print(v);
  return 0;
}