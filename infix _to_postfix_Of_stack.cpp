#include<bits/stdc++.h>
using namespace std;


int precedence(char ch)
{
    if(ch == '^')
    {
        return 3;
    }
    else if(ch == '/'|| ch == '*')
    {
        return 2;
    }


    else if(ch == '+'|| ch == '-')
     {
        return 1;
    }
    else return -1;
}

string infix_to_postfix(string str)
{

    stack<char>stk;
    string ans = " ";

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        if(ch >='a'&&ch<='z'|| ch >='A'&&ch<='Z'||ch >='0'&&ch<='9')
        {
            ans+=ch;

        }
        else if(ch == '(')
        {
            stk.push(ch);

        }
        else if(ch == ')')
        {
            while(stk.top()!='(')

            {
                ans+=stk.top();
                stk.pop();



            }
            stk.pop();

        }
        else
        {
              while(!stk.empty()&&  precedence(ch)<=precedence(stk.top()))
              {
                  ans +=stk.top();
                  stk.pop();

              }
              stk.push(ch);


        }
    }
    while(!stk.empty())
    {
        ans+=stk.top();
        stk.pop();

    }
    return  ans;




}

int main()
{
    string s;
    cin>>s;
    string postfix = infix_to_postfix(s);
    cout<<postfix<<endl;

}
