#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0,row,col;
    cout<<"Enter the value of rows: ";
    cin>>row;
    cout<<"Enter the value of columns: ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter the element in array: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
            sum=sum+arr[i][row-i-1];
    }
    cout<<"Sum of the diagonal element is: "<<sum;
}

