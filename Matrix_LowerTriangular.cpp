#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col,flag=0;
    cout<<"Enter the value of rows: ";
    cin>>row;
    cout<<"Enter the value of columns: ";
    cin>>col;
    int a[row][col];
    cout<<"Enter the element in first array: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nLower triangular matrix is: ";
    for(i=0;i<row;i++)
    {
        cout<<"\n";
        for(j=0;j<col;j++)
        {
            if(i>=j)
                {
                cout<<a[i][j];
                }
            else
            {
                cout<<"0";
            }
        }
    }
}
