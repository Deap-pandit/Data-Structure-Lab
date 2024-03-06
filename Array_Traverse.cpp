#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int  Arr[n];
    int a_max=0,a_min =0 ,total = 0,Avg =0 ;

    for(int i=0 ; i<n;i++)
    {
        cin>>Arr[i];



    }
    a_max = Arr[0];
    a_min = Arr[0];

    for(int i=0 ; i<n;i++)
    {
        if(Arr[i]>a_max)
        {
            a_max = Arr[i];

        }
        if(Arr[i]<a_min)
        {
            a_min = Arr[i];
        }
        total = total+Arr[i];




    }
    Avg = total/n;
    cout<<"Maximum Value is :" <<a_max<<endl;
    cout<<"Minimum Value is :"<<a_min<<endl;
    cout<<"Total Value is :"<<total<<endl;
    cout<<"Average Value is :"<<Avg<<endl;

    //int PI = 3.1416;

    cout<<"sine Value of the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        double x = Arr[i]*(3.14/180);
       // cout<<x<<endl;

        double res = sin(x);
        cout<<"sine value of "<< Arr[i]<< " is "<<res<<endl;

    }

}
