#include<bits/stdc++.h>
using namespace std;

const int A=100;
int Arr[A];



int binary_searchA(int x,int low,int high)
{
    while(low<=high)
    {

        int mid= (low+high)/2;
        if(x == Arr[mid])
        {
            return mid;
        }
        else if(x>Arr[mid])
                {
                    low = mid+1;
                }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];

    }
    cout<<"enter the data :";
    int data;
    cin>>data;
    int res = binary_searchA(data,0,n-1);
    if(res==-1)
    {
        cout<<"data not present"<<endl;

    }
    else{
        cout<<"data is present"<<endl;

    }
}
