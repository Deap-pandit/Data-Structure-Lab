#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *link;

};

int main()
{
    int n;
    cout<<"number of node in the linklist"<<endl;
    cin>>n;

    struct node *head,*newnode,*temp;
        head = NULL;

    while(n--)
    {

        newnode = (struct node*)malloc(sizeof(struct node));
        int d;
        cout<<"enter the data"<<endl;
        cin>>d;
        newnode-> data = d;
        newnode -> link = NULL;
        if(head =  NULL)
        {
            head = newnode;
            temp = newnode;

        }
        else
        {
            temp -> link = newnode;
            temp = newnode;

        }


    }
    temp = head;
    cout<<"the linklista is"<<endl;
    while(head!=0)
    {
        printf("%d",head ->data);
        head = head -> link;
    }

}

