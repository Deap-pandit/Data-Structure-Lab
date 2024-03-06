#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;

};
struct node *head;

struct node *getNode()
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    return newnode;

}

void insert_linklist(int item)
{
    struct node *newnode = getNode();
    newnode -> data = item;
    newnode -> link = NULL;

    if(head == NULL)
    {
        head = newnode;

    }
    else{
        struct node *temp;
        temp = head;
        while(temp -> link !=NULL)
        {
            temp = temp ->link;

        }
        temp ->link = newnode;

    }
}
void delete_First_node()
{
    if(head == NULL)
    {
        cout<<"The linklist is empty"<<endl;

    }
    else
    {
        struct node * traversal = head;
        head = head ->link;
        traversal -> link = NULL;
        free(traversal);

    }
}
void print_Linklist()
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr -> data <<" ";
        ptr  = ptr->link;

    }
    cout<<endl;
}
int  sumation_Data()
{
    struct node *ptr1 = head;
    int sum = 0;
    while(ptr1 !=0)
    {
        sum = sum + ptr1 ->data;
        ptr1 = ptr1 ->link;

    }
   return sum;
}

int main()
{
    int n;
    cout<<"Number of node"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int item;
        cout<<"enter the item"<<endl;
        cin>>item;
        insert_linklist(item);


    }
    cout<<"the information of linklist"<<endl;
    print_Linklist();

    //cout<<"sum of the data in the linklist"<<endl;


   // int sumation = sumation_Data();
   // cout<<sumation<<endl;

    //cout<<"avarage of data"<<endl;
   // cout<<(sumation/n)<<endl;

   delete_First_node();
   cout<<"the linklist after the deleted"<<endl;

   print_Linklist();
   return 0;




}

