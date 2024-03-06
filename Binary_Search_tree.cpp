#include<bits/stdc++.h>
using namespace std;



int tree[1000];

/*int bstInsert(int item,int node)
{
    if(tree[node-1] == NULL)
    {
        tree[node-1] = item;
        return node;
    }
    else if(tree[node-1] == item)
    {
        return node;

    }
    else
    {
        if(item<tree[node-1])
        {
            return bstInsert(item,(2*node));
        }
        else
        {
            return bstInsert(item,(2*node +1));
        }
    }
}*/


int maxHeap(int node){
   if(node ==1)
    {
        return node;

    }
    else
    {
        int parent = node/2;
        if(tree[node-1]>tree[parent-1])
        {
            int temp = tree[parent-1];
            tree[parent-1] = tree[node-1];
            tree[node-1] =temp;
            return maxHeap(parent);
        }
        else
        {
           /// cout<<"nnn"<<endl;
            return node;
        }
    }
}

int main()
{
   int n;
    cout<<"enter the number of node :";
    cin>>n;
/*
//6
//40 60 50 33 55 11

    for(int i=0;i<n;i++)
    {
        int val;
        //cout<<"enter the value of node :";
        cin>>val;
        int position= bstInsert(val,1);

    }
    cout<<bstInsert(65,1);
  */

   for(int i=0;i<n;i++)
    {
        int item;
      // cout<<"enter the item which is inserted with maxheap:";
       int loc;
       cin>>item;
       for(int i=0;i<1000;i++)
       {
          if(tree[i] == NULL)
          {
              tree[i] = item;
              loc = i+1;
               break;

          }
       }
       int num  = maxHeap(loc);
       cout<<"loc is "<<num<<endl;
    }

}
