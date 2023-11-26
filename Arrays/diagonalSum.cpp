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

// void diagonalSum(int arr[][3],int row,int col)
// {
//     int dsum = 0;
//     for (int i = 0; i < row;i++)
//     {
//         for (int j = 0; j < col;j++)
//         {
//             if(i==j){
//             dsum += arr[i][j];
//             }
//         }
//     }
//     cout << "SUM:" << dsum << endl;
// }

void diagonalSum(int arr[][3],int row,int col)
{
    int dsum = 0;
    for (int i = 0; i < row;i++)
    {
        dsum += arr[i][i];
    }
    cout << "SUM:" << dsum << endl;
}




int main()
{
    int row = 3;
    int col = 3;
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //printArrayRowWise(arr, row, col);

    diagonalSum(arr, row, col);
}