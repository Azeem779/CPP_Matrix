#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col,flag=1;
    cout<<"Enter the value of rows: ";
    cin>>row;
    cout<<"Enter the value of columns: ";
    cin>>col;
    int a[row][col],b[row][col];
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
            b[j][i]=a[i][j];
        }
    }
    cout<<"\nTranspose matrix is: ";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<b[i][j]<<" ";
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag++;
                break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"\nMatrices is transpose.";
    }
    else{
        cout<<"\nMatrices is not transpose.";
    }
}

