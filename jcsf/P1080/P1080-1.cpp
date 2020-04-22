#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
string aa;
int a[5010];
int s_to_i(string x)
{
    int ans=0;
    for(int i=0;i<x.length();i++)
    {
        ans=(ans*10)+(x[i]-'0');
    }
    return ans;
}
string mm(string e,int f)
{
    string res="";
    memset(a,0,sizeof(a));
    for(int i=0;i<e.length();i++)
    {
        a[i]=e[i]-'0';
    }
    for(int i=0;i<e.length();i++)
    {
        a[i+1]+=(a[i]%f)*10;
        res+=char((a[i]/f)+48);
    }
    int flag=0;
    for(int i=0;i<res.length();i++)
    {
        if(!(res[i]-'0'))
        {
            flag++;
        }
        if((res[i]-'0'))
        {
            break;
        }
    }
    string ret="";
    for(int i=flag;i<res.length();i++)
    {
        ret+=res[i];
    }
    return ret;
}
int main()
{
    cin>>aa;
    cout<<mm("10",s_to_i(aa))<<endl;
    return 0;
}