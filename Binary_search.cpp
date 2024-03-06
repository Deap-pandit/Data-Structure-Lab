#include<bits/stdc++.h>
using namespace std;

const int N=1000;
int Arr[N];

int binary_Search(int x,int low,int high)
{
    while(low<=high)
    {
        int mid = (low +high)/2;
        if(x == Arr[mid])
        {
            return mid;
        }
        else if(x>Arr[mid])
        {
            low = mid +1;
        }
        else
        {
            high = mid-1;
        }

    }
    return -1;
}

int main()
{
    cout<<"number of element in the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];

    }
    cout<<"enter the data for search"<<endl;
    int data;
    cin>>data;
    int res =  binary_Search(data,0,n-1);
    if(res!=-1)
    {
        cout<<"Data at present in the Data"<<endl;

    }
    else{
        cout<<"Data did not present in the array"<<endl;

    }


}


