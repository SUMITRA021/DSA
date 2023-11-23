#include<iostream>
using namespace std;


void ZeroOne(int arr[],int size)
{
    int zeroCount = 0;
    int OneCount = 0;

    for (int i = 0; i < size;i++)
    {
        if(arr[i]==0)
        {
            zeroCount++;
        }
        else{
            OneCount++;
        }
    }
    cout << "Onecount:" << OneCount << endl;
    cout << "ZeroCount:" << zeroCount << endl;
}

int main()
{
    int arr[10] = {0, 1, 1, 1, 0, 0, 1, 1};
    int size = 8;
    ZeroOne(arr, size);
    return 0;
}