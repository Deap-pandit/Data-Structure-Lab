#include<bits/stdc++.h>
using namespace std;

const int MAX =10;
int Arr[MAX] ;
int top  = -1;


int data_push(int data)
{
    if(top == MAX-1)
    {
        cout<<"stack overflow"<<endl;

    }
    top = top+1;
    Arr[top] = data;
    return 0;


}
int data_pop()
{
    int element;
    if(top<0)
    {
        cout<<"stack underfloe occured"<<endl;

    }
    element = Arr[top];

    top = top-1;
    return 0;

}
void print_stack_data()
{
    int i=0;
    while(i<=top)
    {
        cout<<Arr[i]<<" ";
        i++;

    }
}
//cout<<endl;


int main()
{
    int i=0;

    while(i<MAX)
    {
        int value;
        cout<<"enter the value :";

        cin>>value;
        data_push(value);
        i++;

    }
    cout<<"After push the data stack is ";

    print_stack_data();
    cout<<endl;
    cout<<"pop the data in the stack";

    data_pop();
    cout<<"after pop the stack is ";

    print_stack_data();


}
