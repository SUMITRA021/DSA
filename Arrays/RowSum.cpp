#include<iostream>
#include<limits.h>
using namespace std;


void printArrayRowWise(int arr[][3],int row,int col)
{
    for (int i = 0; i <row ;i++)
    {
        for (int j = 0; j <col ;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rowSum(int arr[][3],int row,int col)
{
    
    for (int i = 0; i < row;i++)
    {
        int sum = 0;
        for (int j = 0; j < col;j++)
        {
            sum += arr[i][j];
        }
        cout << "SUM:" << sum << endl;
    }
}

void colSum(int arr[][3],int row,int col)
{
    
    for (int j = 0; j <col;j++)
    {
        int sum = 0;
        for (int i = 0; i < row;i++)
        {
            sum += arr[i][j];
        }
        cout << "SUM:" << sum << endl;
    }
}


int main()
{
    int row = 3;
    int col = 3;
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //printArrayRowWise(arr, row, col);

    rowSum(arr, row, col);
    cout << endl;
    colSum(arr, row, col);
}