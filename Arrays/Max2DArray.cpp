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

void Max(int arr[][3],int row,int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            if(arr[i][j]>max){
                max = arr[i][j];}
        }
    }
    cout << "max:"<<max;
}

int main()
{
    int row = 3;
    int col = 3;
    
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    //printArrayRowWise(arr, row, col);

    Max(arr, row, col);
}