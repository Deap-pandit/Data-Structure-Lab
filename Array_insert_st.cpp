#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"number of string in a array "<<endl;
    int n;
    cin>>n;
    string Str[n];
    for(int i=0;i<n;i++)
    {
        cin>>Str[i];

    }
    for(int i=0;i<n;i++)
    {
       // cout<<Str[i] <<" ";

    }
    cout<<"sorted the string "<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(Str[j]>Str[j+1])
            {
                 string s  = Str[j];
                 Str[j] = Str[j+1];
                 Str[j+1] = s;


            }
        }
    }
     for(int i=0;i<n;i++)
    {
      // cout<<Str[i] <<" ";

    }
    cout<<"enter the string which is inserted"<<endl;
    string s;
    cin>>s;
    int p = 0;
    for(int j=0;j<n;j++)
    {
        if(Str[j]>s)
        {
            p = j;
            break;
        }
    }
    for(int i=n;i>p;i--)
    {
        Str[i] = Str[i-1];
    }
    Str[p] = s;
   // cout<<Str[p];
    for(int k=0;k<n+1;k++)
    {
        cout<<Str[k]<<" ";
    }

}
