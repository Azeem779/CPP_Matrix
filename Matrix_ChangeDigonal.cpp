#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col,temp;
    cout<<"Enter the value of rows: ";
    cin>>row;
    cout<<"Enter the value of columns: ";
    cin>>col;
    int a[row][col];
    cout<<"Enter the element in array: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
if(i==j)
{
    for(i=0;i<row;i++)
    {
        temp=a[i][i];
        a[i][i]=a[i][row-i-1];
        a[i][row-i-1]=temp;
    }
    cout<<"After changing diagonals the array is:  ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}
else{
    cout<<"Matrix is not square.";
}
}
