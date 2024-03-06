#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"number of row and column in the 2d matrix"<<endl;
    int n,m;
    cin>>m>>n;

    int Arr[m][n];
    int Arr2[m*n];

    cout<<"enter the element of the matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {


            cin>>Arr[i][j];
        }

    }
    int p=0;
    for(int i=0;i<m;i++)
    {



       for(int j=0;j<n;j++)
        {

           Arr2[p] = Arr[i][j];
           p++;

        }

    }
    cout<<"the 1D array is "<<endl;

    for(int i=0;i<m*n;i++)
    {
        cout<<Arr2[i]<<" ";

    }

    for(int i=0;i<m*n;i++)
    {


    }
}
