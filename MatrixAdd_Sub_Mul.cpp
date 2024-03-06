#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the raw and colume of 1st matrix"<<endl;
    int m,n;
    cin>>m>>n;
    int A1[m][n];
    cout<<"enter the raw and colume of 2nd matrix"<<endl;
    int a,b;
    cin>>a>>b;
    int A2[a][b];
    cout<<"enter the raw and colume of matrix for addition"<<endl;
    int x,y;
    cin>>x>>y;

    int A3[x][y];
    cout<<"enter the raw and colume of matrix for subtraction"<<endl;
    int p,q;
    cin>>p>>q;
    int A4[p][q];
    cout<<"enter the raw and colume of matrix for multiplication"<<endl;
    int c,d;
    cin>>c>>d;
    int A5[c][d];
    cout<<"enter the element of 1st matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A1[i][j];
        }
    }
    cout<<"enter the element of second matrix "<<endl;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>A2[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           A3[i][j] = A1[i][j] + A2[i][j];
        }
    }
    cout<<"Addition matrix is "<<endl;
     for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<A3[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
           A4[i][j] = A1[i][j] - A2[i][j];
        }
    }
    cout<<"Subtraction matrix is "<<endl;

     for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<A4[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int sum = 0;
            for(int k=0;k<m;k++)
            {
                sum = sum+ A1[i][k] * A2[k][j];

            }
             A5[i][j] = sum;
        }
    }

     cout<<"Multiplication matrix is "<<endl;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<A5[i][j]<<" ";
        }
        cout<<endl;
    }

}
