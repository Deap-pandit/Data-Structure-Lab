#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n==1||n==0)
    {
        return n;

    }
    else
    {
        return fibo(n-1) +fibo(n-2);
    }
}

int main()
{
    int n;
    cout<<"enter the term of series"<<endl;
    cin>>n;
    int i=0;
    while(i<n)
    {
        cout<<fibo(i) <<" ";
        i++;
    }
}
