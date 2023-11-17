#include <iostream>
using namespace std;

void Sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) // alternative way - for(int i=2;i<=n;i+2)
    {
        if(i%2==0){
            sum += i;}
        else{
            continue;}
    }
    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    Sum(n);
    return 0;
}