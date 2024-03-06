#include<bits/stdc++.h>
using namespace std;

int tree[1000];

/*
int btree(int data,int node)
{
    if(tree[node-1] == NULL )
    {
        tree[node-1] = data;
        return node;
    }
    if(tree[node-1] == data)
    {
        return node;

    }
    else{

        if(data<tree[node-1])
        {
            return btree(data,(2*node));
        }
        else
        {
            return btree(data,(2*node+1));
        }
    }

}*/

int maxheap(int node)
{
    if(node ==1)
    {
        return node;
    }
    else{
            //cout<<"cc";
        int par =node/2;
        if(tree[node-1]>tree[par-1])
        {
            int temp = tree[par-1];
            tree[par-1]= tree[node-1];
            tree[node-1] = temp;
            return maxheap(par);

        }
        else{
            return node;

        }

    }
}

int main()
{
   /* int n,a=0;
    cout<<"enter the number of node";

    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
          a = btree(val,1);
    }
    cout<<"pos is " ;
     int r =btree(40,1);
     cout<<r<<endl;
*/
int n;
cout<<"enter the number of node :";
cin>>n;

for(int i=0;i<20;i++)
{
    //cout<<tree[i]<<" ";
}
for(int i=0;i<n;i++)
{
    int item;
    cin>>item;
    int loc;
    for(int i=0;i<1000;i++)
    {
        if(tree[i] == 0)
        {
            tree[i] = item;
            loc =loc+1;
            break;

        }
    }
    int a= maxheap(loc);
    cout<<"loc is "<<a<<endl;
}



}
