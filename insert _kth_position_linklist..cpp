#include<iostream>
using namespace std;


struct node
{
    int data;
    struct node *link;

};
struct node *head = NULL;


struct node* getNode()
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    return newnode;

}
void creatLinklist(int item)
{
    struct node * newnode = getNode();
    newnode -> data = item;
    newnode ->link = NULL;

    if(head == NULL)
    {
        newnode ->link = head;
        head = newnode;

    }
    else
    {
        struct node *temp = head;
        while(temp ->link !=NULL)
        {
            temp = temp->link;

        }
        temp ->link = newnode;


    }


}
void insert_kth_position(int item,int position)
{

    struct node * newnode = getNode();
    newnode -> data = item;
    newnode ->link = NULL;

    if(head == NULL)
    {
        head = newnode;

    }
    else if(position == 1)
    {

        newnode ->link = head;
        head = newnode;

    }
    else
    {
        struct node *traverse = head;
        int currentposition = 1;
        while(currentposition<position-1)
        {
            currentposition++;
            traverse = traverse ->link;

        }
        newnode ->link = traverse ->link;
        traverse ->link = newnode;

    }


}
void insert_last_node(int item)
{
    struct node *temp = head;
     struct node * newnode = getNode();
     newnode -> data = item;
    newnode ->link = NULL;


    while(temp ->link!=NULL)
    {
        temp = temp ->link;

    }
      temp ->link = newnode;

}
void printLinklist()
{
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr ->data<<" ";
        ptr = ptr ->link;

    }

}

int main()
{
    int node;
    cout<<"Number of  node in the linklist"<<endl;
    cin>>node;
    for(int i=0;i<node;i++)
    {
        cout<<"enter the"<<i+1 <<"th element :";

        int element;
        cin>>element;
         creatLinklist(element);



    }
    cout<<"the linklist is :"<<endl;

     printLinklist();
     cout<<endl;
     int value;
     cout<<"enter the value which is Added in the linklit int he kth  position "<<endl;
     cin>>value;
     int p;
     cout<<"enter the position int linklist which is inserted posotion"<<endl;
     cin>>p;


     insert_kth_position(value,p);
     cout<<"After inserted the linklist"<<endl;

     printLinklist();
     cout<<endl;

     cout<<"enter the value of last node which is added as last node"<<endl;
     int num;
     cin>>num;
     insert_last_node(num);

     cout<<"the linklist after insert the lasr node"<<endl;
      printLinklist();



}
