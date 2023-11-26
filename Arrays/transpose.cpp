#include<iostream>

using namespace std;


void printArray(int arr[][3],int row,int col)
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

// //with upper triangle
// void transposeMat(int arr[][3],int row,int col)
// {
//     for (int i = 0; i < row;i++)
//     {
//         for (int j = i; j < col;j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }


//with lower triangle
void transposeMat(int arr[][3],int row,int col)
{
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j <=i;j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}


int main()
{
    int row = 3;
    int col = 3;
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printArray(arr, row, col);
    transposeMat(arr, row, col);
    cout << "after"<< endl;   
    printArray(arr, row, col);
    
}