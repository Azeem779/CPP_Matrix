#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col,sum=0;
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
 cout<<"\nUpper triangular matrix is: ";
    for(i=0;i<row;i++)
    {
        cout<<"\n";
        for(j=0;j<col;j++)
        {
            if(i<=j)
                {
                cout<<a[i][j]<<" ";
                }
            else
            {
                cout<<" 0 ";
            }
        }
    }

cout<<"\nSum of upper triangular matrix is: ";
    for(i=0;i<row;i++)
    {
        cout<<"\n";
        for(j=0;j<col;j++)
        {
            if(i<j)
                {
                    sum=sum+a[i][j];
                }
        }
    }
    cout<<sum;
}

