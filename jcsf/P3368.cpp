#include<iostream>
#include<cstdio>
#define maxn 10000001
using namespace std;
int a[maxn]={0},tree[maxn],ans[maxn]={0};
int n,m;
inline int read(){
    int s=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        s=s*10+ch-'0';
        ch=getchar();
    }
    return s*f;
}
int lowbit(int x)
{
    return x & (-x);
}
void update(int x,int k)
{
    while(x<=n)
    {
        tree[x]+=k;
        x+=lowbit(x);
    }
}
int getsum(int x)
{
    int ans=0;
    while(x>0)
    {
        ans+=tree[x];
        x-=lowbit(x);
    }
    return ans;
}
int main()
{
    cin>>n>>m;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        a[i]=read();
        update(i,a[i]-a[i-1]);
    }
    for(int i=1;i<=m;i++)
    {
        int opt;
        opt=read();
        if(opt==1)
        {
            int x,y,k;
            x=read();y=read();k=read();
            update(x,k);
            update(y+1,-k);
        }
        if(opt==2)
        {
            int x;
            x=read();
            cout<<getsum(x)<<endl;
        }
    }
    return 0;
} 