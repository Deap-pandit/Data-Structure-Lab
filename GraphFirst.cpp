#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"number of vertex in the graph :";
    cin>>n;
    int Arr[n+4][n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>Arr[0][i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"adjacency of v"<<i+1<<":";
        for(int j=0;j<n;j++)
        {
            if(Arr[0][i][j] !=0)
            {
                cout<< "v"<<j+1<<" ";
            }
        }
        cout<<endl;
    }
    for(int p=1;p<n;p++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum = 0;
                for(int k=0;k<n;k++)
                {
                    sum = sum + Arr[p-1][i][k] * Arr[0][k][j];

                }
                Arr[p][i][j] = sum;

            }
        }
    }

    for(int p=0;p<n;p++)
    {
        cout<<"number of path of length "<<p+1<<endl;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<Arr[p][i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    for(int p=0;p<n;p++)
    {


        for(int i=0;i<n;i++)
        {
            int sum = 0;

            for(int j=0;j<n;j++)
            {
                sum = sum + Arr[j][p][i];

            }
            Arr[n][p][i] = sum;

        }
    }
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(Arr[n][i][j] == 0)
            {
                flag =true;
            }
        }
    }
    if(flag)
    {
        cout<<"graph is not strongly connected"<<endl;

    }
    else{
        cout<<"graph is strongly connected<<endl";


    }
}

