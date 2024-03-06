#include<bits/stdc++.h>
using namespace std;


struct node{

    int data;
    struct node*link;

};
const int mx =100;

typedef struct node* nodeptr;

nodeptr Arr[100];
nodeptr getnode(int x)
{
    nodeptr newnode = (nodeptr)malloc(sizeof(nodeptr));
     newnode ->data = x;
     newnode ->link = NULL;
         return newnode;
}

void graph(int a,int b)
{
    nodeptr p1 =getnode(b);
    if(Arr[a] ==NULL)
    {
        Arr[a] = p1;
        return;
    }
    else{
        nodeptr p2 = Arr[a];
        while(p2->link!=NULL)
        {
            p2 =p2->link;
        }
        p2->link = p1;
    }
}
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"---";
        nodeptr ptr = Arr[i];
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr = ptr->link;
        }
        cout<<endl;
    }
}
int main()
{
    for (int i=0;i<mx;i++)
    {
        Arr[i] =NULL;
    }
    int n,e;
    cout<<"enter the node and edge ";
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        graph(a,b);
    }

    print(n);
}
