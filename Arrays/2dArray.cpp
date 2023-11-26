#include<iostream>
using namespace std;


void printArrayRowWise(int arr[][4],int row,int col)
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

void printArrayColWise(int arr[][4],int row,int col)
{
    for (int i = 0; i <col ;i++)
    {
        for (int j = 0; j <row ;j++)
        {
            cout << arr[j][i] <<" ";
        }
        cout << endl;
    }
}


int main()
{
    //create and initialize
    // int arr[3][4] = { {10,20,30,10},{40,50,60,23},{70,80,90,42} };

    // int arr1[ ][3] = { {10,20,30},{40,50,60},{70,80,90} };
    
    //int arr2[ ][ ] = { {10,20,30},{40,50,60},{70,80,90} }; --Error
    //int arr2[1][ ] = { {10,20,30},{40,50,60},{70,80,90} }; --error

    int row;
    int col=4;
    
    //take input
    cout << "Enter row:" << endl;
    cin >> row;
    // cout << "Enter col:" << endl;
    // cin >> col;
    int arr[row][4];
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
        printArrayRowWise(arr, row, col);

    // //print
    // printArrayRowWise(arr, row, col);
    // cout << "-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- "<< endl;
    // printArrayColWise(arr, row, col);
}