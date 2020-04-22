#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack <int> s;
int main()
{
    int n;
    cin>>n;
    int ma=-1000;
    int last=-1000;
    for(int i=1;i<=n;i++)
    {
        int opt;
        cin>>opt;
        if(opt==1)
        {
            int a;
            cin>>a;
            s.push(a);
            if(a>ma)
            {
                ma=a;
            }
        }
        if(opt==2)
        {
            if(!s.empty())
            {
                continue;
            }
            else
            {
                if(s.top()==ma)
                {

                }
                s.pop();
            }
        }
        if(opt==3)
        {
            if(!s.empty())
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<ma<<endl;
            }
            
        }
    }
    return 0;
}