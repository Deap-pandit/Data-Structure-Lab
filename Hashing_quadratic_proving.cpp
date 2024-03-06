#include<bits/stdc++.h>
using namespace std;

int main()
{
     int Arr[11]={0};
     bool arr[11] = {0};
     int n,k=1;
     bool flag  = false;
      cout<<"Enter the size ";
     cin>>n;
     int element;
     for(int i=0;i<n;i++)
     {
         cin>>element;

         int rem = element%11;
         k=1;

         while(arr[rem])
         {
             rem =rem +(k*k);
             rem=rem%11;
             k++;

         }
         Arr[rem]= element;
         arr[rem]= true;


     }
     cout<<"enter the search number ";
     int item;
     cin>>item;
     for(int i=0 ;i<11;i++)
     {
         if(Arr[i] == item)
         {
             cout<<"item "<<i+1<<" index"<<endl;
             flag = true;
             break;

         }
     }
     if(flag)
     {
         cout<<"item is founded"<<endl;
     }
     else
     {
         cout<<"item is not founded"<<endl;
     }
     int p=0;
     for(int i=0;i<11;i++)
     {
         if(Arr[i] == NULL)
         {
             cout<<"null"<<" ";
         }
            else{
         cout<<Arr[i] <<" ";}

     }
     cout<<endl;
     cout<<p;

}



