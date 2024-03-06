#include<bits/stdc++.h>
using namespace std;

int const mx = 100;

struct node
{
    int data;
    struct node*link;
};

struct node * Arr[mx];

struct node* getnode(int c)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode ->data = c;
    newnode ->link = NULL;
    return newnode;




}
void graph(int a,int b)
{
    struct node* ptr  =getnode(b);
    if(Arr[a] == NULL)
    {
        Arr[a] = ptr;
        return ;
    }
    struct node*ptr1 = Arr[a];
    while(ptr1->link!=NULL)
    {
        ptr1 = ptr1->link;
    }
    ptr1->link = ptr;
}

void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"---";
        struct node* ptr = Arr[i];
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"-";
            ptr = ptr->link;
        }
        cout<<endl;

    }
}
int main()
{
    for(int i=0;i<mx;i++)
    {
        Arr[i] = NULL;

    }
    cout<<"enter the number of node and edge:";
    int nd,eg;
    cin>>nd>>eg;
    for(int i=0;i<eg;i++)
    {
        int a,b;
        cin>>a>>b;
        graph(a,b);
    }
    print(nd);
}
