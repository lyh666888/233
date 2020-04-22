#include<bits/stdc++.h>
using namespace std;
string s="";
int z[100001];
int a,b;
string xxx;
int main()
{
    cin>>a>>b;
    int cc=0;
    cin>>xxx;
    for(int i=0;i<=xxx.length()-1;i++)
    {
        z[i+1]=xxx[i]-'0';
    }
    if(a==10&&z[1])
    {
        puts("-1");
        return 0;
    }
    if(a==10)
    {
        for(int i=1;i<=b;i++)
        {
            if(!z[i])
            {
                s+='1';
            }
            else
            {
                s+='0';
            }
        }
        cout<<s<<endl;
        return 0;
    }
    else
    {
        for(int i=1;i<=b;i++)
        {
            if(cc&&(!z[i]))
            {
                s+='0';
                cc*=10;
            }
            else if((!cc)&&(!z[i]))
            {
                s+='1';
                cc++;
                cc*=10;
            }
            else if(cc&&z[i])
            {
                s+=(a-cc)+'0';
                cc=0;
            }
            else if((!cc)&&z[i])
            {
                if(i==1)
                {
                    s+=a+'0';
                }
                else
                {
                    s+='0';
                    cc*=10;
                }
            }
            cc%=a;
        }
    }
    cout<<s<<endl;
    return 0;
}