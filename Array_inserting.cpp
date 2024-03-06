#include<bits/stdc++.h>
using namespace std;

const int N =100;
int Arr[N];


void Array_sort(int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;


            }

        }
    }
}

int insert_elememt(int num,int n)
{
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(Arr[i]>num)
        {
            p= i+1;
            break;
        }
    }
    for(int i = n;i>=p;i--)
    {
        Arr[i] = Arr[i-1];

    }
    Arr[p-1] = num ;
    return n+1;

}

int main()
{
    int n;
    cout<<"number of element in the  Array"<<endl;
    cin>>n;
    cout<<"Enter the Array Element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    Array_sort(n);
    for(int i=0;i<n;i++)
    {
       //cout<<Arr[i]<<" ";
    }
    cout<<"Enter the number Which is inserted"<<endl;
    int num;
    cin>>num;

    int element = insert_elememt(num,n);

    cout<<"Array after the insert the element"<<endl;
    for(int i=0;i<element;i++)
    {
      cout<<Arr[i]<<" ";
    }






}
