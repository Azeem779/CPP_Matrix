#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col;
    cout<<"Enter the value of row: ";
    cin>>row;
    cout<<"Enter the value of column: ";
    cin>>col;
    int a[row][col],b[row][col],add[10][10];
    cout<<"Enter the element in first array: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the element in second array: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"\nAddition of the matrix is: "<<add[i][j];
        }
    }
}
