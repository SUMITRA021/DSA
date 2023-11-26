#include<iostream>
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


bool SearchInArray(int arr[][3],int row,int col,int target)
{
    int flag = 0;
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            if(arr[i][j]==target)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag==1 )
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }
}

int main()
{
    int row = 3;
    int col = 3;
    int target = 70;
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    printArrayRowWise(arr, row, col);
    SearchInArray(arr, row, col, target);
    
}