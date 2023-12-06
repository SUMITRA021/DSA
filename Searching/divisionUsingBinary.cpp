#include<iostream>
using namespace std;

int division(int divident,int divisor)
{
    int s = 0;
    int e = divident;
    int mid = s + (e - s)/2;
    int ans;
    while(s<=e)
    {
        if(mid*divisor == divident)
        {
            return mid;
        }
        else if(mid*divisor < divident)
        {   
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
            
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int divisor = 7;
    int divident = 29;
    int ans = division(divident, divisor);
    cout << ans;
    return 0;
}