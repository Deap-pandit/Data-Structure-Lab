#include<bits/stdc++.h>
using namespace std;

int main()
{

    int Arr[11] = {0};
    bool arr[11] = {0};

    int n;
    cout<<"Enter the element "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        int rem;

        cout<<"enter the value"<<endl;
        cin>>val;
        rem = val%11;
        while(arr[i])
        {
            rem++;
            if(rem>10)
            {
                rem = 0;
            }
        }
        Arr[rem] = val;
        arr[rem] = true;

    }
    int item;
    cout<<"Enter the search item"<<endl;
    cin>>item;
    int index = 0;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(item == Arr[i])
           {
                flag = true;
                index = i;

                    break;


           }
    }
    if(flag)
    {
        cout<<"item is founded at "<< index+1 <<" position"<<endl;


    }
    else{
        cout<<"item is  not founded"<<endl;

    }
    cout<<"Hash table is "<<endl;
    for(int i=0;i<11;i++)
    {
        if(Arr[i] == 0)
        {
            cout<<"null"<<" ";
        }
        else{
            cout<<Arr[i]<<" ";
        }
    }

}
