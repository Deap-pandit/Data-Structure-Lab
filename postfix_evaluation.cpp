#include<bits/stdc++.h>

using namespace std;

int getValue(int n1,int n2,char ch)
{
    if(ch == '+')
    {
        return n1+n2;
    }
    if(ch == '-')
    {
        return n1-n2;
    }
    if(ch == '*')
    {
        return n1*n2;
    }
    if(ch == '/')
    {
        return n1/n2;
    }
    if(ch == '^')
    {
        int val=1;
       /* for(int i=1;i<=n2;i++)
        {
            val =  val * n1;
        }
        return val;
        */
        return pow(n1,n2);
    }
}


int postfixEvaluation(string st)
{
     stack<int>stk;

     for(int i=0;i<st.length();i++)
     {
         if(st[i]>='0'&& st[i]<='9')
         {
             stk.push(st[i]-'0');
         }
         else if(isalpha(st[i]))
         {
             cout<<"enter the value of  "<<st[i]<< ":"<<endl;
             int n;
             cin>>n;
             stk.push(n);

         }
         else{
            int opnd1 = stk.top();
            stk.pop();
            int opnd2 = stk.top();
            stk.pop();
            int value = getValue(opnd2,opnd1,st[i]);
            stk.push(value);

         }


     }
     return stk.top();

}

int main()
{
    string s;
    cin>>s;
    int  value = postfixEvaluation(s);
    cout<<value;
}
