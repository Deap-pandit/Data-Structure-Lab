#include<bits/stdc++.h>
using namespace std;

const int N =100;
int Arr[N];

int main()
{
    cout<<"number of element in the Array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];

    }
    cout<<"enter the search data"<<endl;
    int data;
    cin>>data;
    bool flag =0;
    for(int i=0;i<n;i++)
    {
        if(Arr[i] == data)
        {
            flag =1;
            break;
        }
    }
    if(flag)
    {
        cout<<data<<" find the array"<<endl;
    }
    else
    {
        cout<<data<<" did not find the Array"<<endl;
    }

}
