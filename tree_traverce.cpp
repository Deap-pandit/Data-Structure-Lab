#include<bits/stdc++.h>
using namespace std;

int k=20;
char tree[20];

void preOrder(int node)
{


    if(tree[node-1] == NULL || node>k)
    {
        return ;

    }
    cout<<tree[node-1]<<" ";
    preOrder(2*node);
    preOrder(2*node+1);
}

void postOrder(int node)
{

    if(tree[node-1] || node>k)
    {
        return ;

    }
    postOrder(2*node);
    postOrder(2*node+1);
    cout<<tree[node-1] <<" ";

}

void inOrder(int node)
{

    if(tree[node-1] || node>k)
    {
        return ;

    }
    inOrder(2*node);
    cout<<tree[node-1]<<" ";

    inOrder(2*node+1);
}


/*
example trees inputs
test 1
9
1 a
2 b
3 c
4 d
6 e
7 f
8 g
9 h
19 k

test 2
10
1 a
2 b
3 c
4 d
6 e
8 g
9 h
16 k
18 l
19 m
*/

int main()
{
    int n;
    cout<<"enter the number of node :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        char c;
        cin>>p>>c;
        tree[p-1] = c;
    }


    preOrder(1);
    //inOrder(1);
   // postOrder(1);

}
