//NOI ONline 提高组 第二题  冒泡排序
#include<iostream>
#include<algorithm>
#include<cstdio>
#define maxn 1000001
using namespace std;
int a[maxn]={0},b[maxn]={0},tree[maxn]={0},n,m,cnt;
int lowbit(int x)
{
    return x & -x;
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
    int num;
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        a[i]=num;
        for(int j=1;j<i;j++)
        {
            if(a[j]>num)
            {
                b[j]++;
                cnt++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        update(i,b[i]);
    }
    int opt,y;
    for(int i=1;i<=m;i++)
    {
        cin>>opt>>y;
        if(opt==1)
        {
            if(a[y]>a[y+1])
            {
                cnt--;
                swap(a[y],a[y+1]);
                update(y+1,-1);
            }
            if(a[y]<a[y+1])
            {
                cnt++;
                swap(a[y],a[y+1]);
                update(y,1);
            }
        }
        else
        {
            if(y>n)
            {
                cout<<cnt-getsum(n)<<endl;
            }
            else
            {
                cout<<cnt-getsum(y)<<endl;
            }
        }
    }
    return 0;
}