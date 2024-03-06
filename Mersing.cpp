#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"number of element of two array"<<endl;
    int m,n;
    cin>>m>>n;
    int A[m],B[n];
    for(int i=0;i<m;i++)
    {
        cin>>A[i];

    }
     for(int i=0;i<n;i++)
    {
        cin>>B[i];

    }
    int Arr[m+n];
    int k=0;
    for(int j=0;j<m+n;j++)
    {
        if(j<m)
        {
            Arr[j] = A[j];
        }
        else
        {
            Arr[j] = B[k];
            k++;
        }

    }
    for(int i=0;i<m+n;i++)
    {
        cout<<Arr[i]<<" ";
    }
}
