#include <iostream>
using namespace std;


bool CheckPrime(int n)
{
    for (int i = 2; i < n;i++)
    {
        if(n%i==0){
            return false;
    }
    }
    return true;
}


int main()
{
    int n;
    cin >> n;
    bool prime=CheckPrime(n);

    if(prime)
    {
        cout << "prime number" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }
    return 0;
}