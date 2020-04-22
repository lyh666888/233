#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
int a[5010],b[5010],c[5010];
string resu[100002];
int s_to_i(string x)
{
    int ans=0;
    for(int i=0;i<x.length();i++)
    {
        ans=ans*10+(x[i]-'0');
    }
    return ans;
}
struct dc 
{
    string left;
    string right;  
    string sum;
};
dc d[100001];
string mul(string e,string f)
{
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    for(int i=e.length()-1;i>=0;i--)
    {
        a[e.length()-i]=e[i]-'0';
    }
    for(int i=f.length()-1;i>=0;i--)
    {
        b[f.length()-i]=f[i]-'0';
    }
    for(int i=1;i<=e.length();i++)
    {
        for(int j=1;j<=f.length();j++)
        {
            c[i+j-1]=a[i]*b[j];
        }
    }
    int len=e.length()+f.length();
    string res="";
    for(int i=1;i<=len;i++)
    {
        if(c[i]>=10)
        {
            c[i+1]=c[i]/10;
            c[i]%=10;
        }
    }
    while(!c[len])
    {
        len--;
    }
    for(int i=len;i>=1;i--)
    {
        res+=c[i]+'0';
    }
    return res;
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
bool cmp(dc a,dc b)
{
    if(a.sum.length()!=b.sum.length())
    {
        return a.sum.length()<b.sum.length();
    }
    else
    {
        return a.sum<b.sum;
    }
}
bool cmp2(string a,string b)
{
    if(a.length()!=b.length())
    {
        return a.length()>b.length();
    }
    else
    {
        return a>b;
    }   
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>d[i].left>>d[i].right;
        d[i].sum=mul(d[i].left,d[i].right);
    }
    string ans="1";
    ans=mul(ans,d[1].left);
    sort(d+2,d+n+1,cmp);
    string aaa;
    cin>>aaa;
    int rightl;
    cin>>rightl;
    string bbb=ans;
    int k=1;
    for(int i=2;i<=n;i++)
    {
        bbb=ans;
        bbb=mm(bbb,s_to_i(d[i].right));
        resu[k]=bbb;
        k++;
        ans=mul(ans,d[i].left);
    }
    ans=mm(ans,rightl);
    resu[k]=ans;
    sort(resu+1,resu+n+1,cmp2);
    cout<<resu[1]<<endl;
    return 0;
}