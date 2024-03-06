#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c == '*'||c == '/')
    {
        return 2;
    }
    else if(c == '+'||c== '-')
    {
        return 1;
    }
    return -1;
}



string infix_postfix(string str)
{
    stack<char>st;
    string ans = " ";

    for(int i=0;i<str.length();i++)
    {
        char ch =str[i];

        if((ch>='a'&& ch <='z') ||( ch>='0'&&ch<='9'))
        {
            ans+=ch;
        }
        else if(ch =='(')
        {
            st.push(ch);
        }
        else if(ch == ')'){

            while(st.top()!='(')
            {
                ans+=st.top();
                st.pop();

            }
            st.pop();
        }
        else{

            if(!st.empty()&& prec(ch)<=prec(st.top()))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(ch);
        }

    }
    while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
    return ans;
}


int main()
{
    cout<<"enter the input ";
    string s;
    cin>>s;
    string s1 = infix_postfix(s);
    cout<<s1<<endl;

}
