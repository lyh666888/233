#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
stack<int>st;
int s=0;
int main()
{
    char ch;
    do
    {
        ch=getchar();
        if(ch>='0'&&ch<='9')
        {
            s=s*10+(ch-'0');
        }
        else if(ch=='.')
        {
            st.push(s);
            s=0;
        }
        else if(ch!='@')
        {
            int x=st.top();st.pop();
            int y=st.top();st.pop();
            if(ch=='+') st.push(x+y);
            if(ch=='-') st.push(y-x);
            if(ch=='*') st.push(x*y);
            if(ch=='/') st.push(y/x);
        }
    } while (ch!='@');
    cout<<st.top()<<endl;
    return 0;
}