#include<iostream>
#include<string>
using namespace std;
string a;
int main()
{
    cin>>a;
    int cc;
    int len=a.length();
    string s="";
    bool flag=1;
    int k=0;
    for(int i=a.length()-1;i>=0;i--)
    {
        if(k<3)
        {
            s+=a[k];
            k++;
        }
        if(a[i]>='0'&&a[i]<='9'&&flag)
        {
            cc=a[i]-'0';
            flag=0;
        }
    }
    if(s!="MDA")
    {
        cout<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
        return 0;
    }
    else
    {
        if(cc==1||cc==9)
    {
        cout<<1<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
    }
    if(cc==2||cc==8)
    {
        cout<<0<<" ";
        cout<<1<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
    }
    if(cc==3||cc==7)
    {
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<1<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
    }
    if(cc==4||cc==6)
    {
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<1<<" ";
        cout<<0<<" ";
    }
    if(cc==5||cc==0)
    {
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<0<<" ";
        cout<<1<<" ";
    }
    }
    
    cout<<endl;
    return 0;
}