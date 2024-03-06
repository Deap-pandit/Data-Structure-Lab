
#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    struct node*link;

};

typedef struct node *ptrnode;
ptrnode head = NULL;

ptrnode getnode()
{
    ptrnode newnode = (ptrnode)malloc(sizeof(struct node));
    return newnode;
}
void link_creat(int data)
{
    ptrnode newnode = getnode();
    newnode ->data = data;
    newnode ->link = NULL;

    if(head == NULL)
    {

       // newnode ->link = head;
        head = newnode;
    }
    else{
        ptrnode ptr = head;
        while(ptr->link!=NULL)
        {
            ptr= ptr->link;
        }
        ptr ->link = newnode;


    }
}

int traverse()
{
    ptrnode temp = head;
    int sum=0;
    while(temp!=NULL)
    {
        sum = sum+temp->data;
        temp  = temp->link;
    }
    return sum;
}
void aprint()
{
    ptrnode temp =head;
    //cout<<"bbb";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}
 void  asortList(int n){

    ptrnode pre = head;
    ptrnode next = head->link;
    while(pre!=NULL)
    {
        while(next!=NULL)
        {
            if(pre->data >next->data)
            {
                int  temp = pre->data;
                pre ->data = next->data;
                next->data = temp;

             }

              next = next->link;
        }
        next = head->link;
        pre=pre->link;

    }
    return;

}

void deletenode1()
{
    if (head == NULL)
    {
        cout<<"no node in the linklist";
        return;


    }
    if(head->link ==NULL)
    {
        ptrnode a = head;
        head =NULL;
        free(a);
    }
    else{
       ptrnode pre = head;
       ptrnode nt = head->link;
       while(nt->link!=NULL)
       {
           nt = nt->link;
           pre = pre ->link;

       }
       pre ->link =NULL;

}
}
int main()
{
    int n;
    cout<<"enter the number of node:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        link_creat(data);
    }
    aprint();
    cout<<endl;
    cout<<"sum is  ";
    int sum = traverse();
    cout<<sum<<endl;
    cout<<"avg ";
    cout<<sum/n;
    //deletenode1();
    //deletenode1();
    asortList(n);

    cout<<endl;
    aprint();

}
