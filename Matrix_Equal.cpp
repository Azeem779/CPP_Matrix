#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col,flag=0;
    cout<<"Enter the value of rows: ";
    cin>>row;
    cout<<"Enter the value of columns: ";
    cin>>col;
    int a[row][col],b[row][col];
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
            if(a[i][j]==b[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Both matrices are equal.";
    }
    else
    {
        cout<<"Matrices are not equal.";
    }
}
