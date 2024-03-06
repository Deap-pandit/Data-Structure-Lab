#include<bits/stdc++.h>
using namespace std;

 long long int factorial(int n)
{
    if(n ==0 || n == 1)
    {
        return 1;

    }
    return n* factorial(n-1);

}

int main()
{
    int n;
    cout<<"enter the number to calculated the factorial"<<endl;
    cin>>n;
   long long  int val = factorial(n);
   cout<<val<<endl;



}
