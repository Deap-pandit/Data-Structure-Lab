#include<bits/stdc++.h>
using namespace std;

int Arr[100][100];
int SP[100][100];

int mx = 5000;

int main()
{

    int node;
    cout<<"enter the nimber of node :";
    cin>>node;

    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            cin>>Arr[i][j];
            if(Arr[i][j]==0)
            {
                SP[i][j] = mx;
            }
            else{
                SP[i][j] = Arr[i][j];
            }
        }
    }
    for(int k=1;k<=node;k++)
    {
        for(int i=1;i<=node;i++)

        {
            for(int j=1;j<=node;j++)
            {
                SP[i][j] = min(SP[i][j],(SP[i][k]+SP[k][j]));
            }
        }

    }
    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            if(SP[i][j]>=mx)
            {
                cout<<"N"<<" ";
            }
            else{
                cout<<SP[i][j]<<" ";
            }
        }
    }


}

