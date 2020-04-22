#include<iostream>
#include<string>
using namespace std;
string a,b="";
int main()
{
    cin>>a;
    int k;
    bool flag=0;
    bool f=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='.')
        {
            k=i;
            f=1;
            break;
        }
    }
    k--;
    if(!f)
    {
        string base="1";
        for(int i=1;i<=k;i++)
        {
            base+='0';
        }
        for(int i=0;i<a.length();i++)
        {
            if(!a[i]-'0')    
                b+=a[i];
                b+="*"+k;
                if(i!=a.length()-1)
                {
                    b+='+';
                }
        }
        cout<<b<<endl;
        return 0;
    }
    else
    {
        string base="1";
        for(int i=1;i<=k;i++)
        {
            base+='0';
        }
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='.')
            {
                flag=1;
                base="0.";
                k=1;
                continue;
            }
            if(!flag&&a[i]-'0')
            {
                b+=a[i];
                b+=
            }
        }
    }
}