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
        else if(mid*divisor > divident)
        {   
            e = mid - 1;
            
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
            
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int divisor = 7 ;
    int divident = -29;
    int ans = division(abs(divident), abs(divisor));
    //now we need to decide sign '+' or '-'
    
    if((divisor<0&&divident>0)||(divisor>0&&divident<0))
    {
        ans = 0 - ans;
    }

    cout << ans;
    return 0;
}