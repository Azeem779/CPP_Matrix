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
    cout<<"Enter the element in array: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                flag=1;
                break;
            }
            else if(i!=j && a[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Matrix is not Identity.";
    }
    else{
        cout<<"Matrix is Identity.";
    }
}
