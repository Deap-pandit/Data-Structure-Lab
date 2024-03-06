#include<bits/stdc++.h>
using namespace std;

int Arr[100][100];
bool path[100][100];

int main()
{
    int node;
    cout<<"enter the node number :";
    cin>>node;

    for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)
        {
            cin>>Arr[i][j];
            path[i][j] = Arr[i][j];
        }
    }

    for(int k=0;k<node;k++)
    {
        for(int i=0;i<node;i++)
        {
            for(int j=0;j<node;j++)
            {
                path[i][j] = path[i][j]|(path[i][k] & path[k][j]);

            }
        }
    }

    cout<<"path matrix is"<<endl;
    for(int i=0;i<node;i++)
    {
        for(int j=0;j<node;j++)
        {
            cout<<path[i][j]<<" ";
        }
        cout<<endl;

    }
}
