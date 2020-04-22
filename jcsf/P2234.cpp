#include<cstdio>
#include<algorithm>
#define maxn 1000001
#define inf 100000001
using namespace std;
int size[maxn],son[maxn][2],v[maxn],num[maxn],rd[maxn];
int sum=0,root=0;
void update(int p)
{
    size[p]=size[son[p][0]]+size[son[p][1]]+num[p];
}
void xz(int &p,int opt)
{
    int memo=son[p][opt^1];
    son[p][opt^1]=son[memo][opt];
    son[memo][opt]=p;
    update(p);
    update(memo);
    p=memo;
}
void add(int &p,int x)
{
    if(!p)
    {
        p=++sum;
        num[p]=size[p]=1;
        v[p]=x;
        rd[p]=rand();
        return ;
    }
    if(v[p]==x)
    {
        num[p]++;
        size[p]++;
        return ;
    }
    int d=x>v[p];
    add(son[p][d],x);
    if(rd[son[p][d]]>rd[p]) xz(p,d^1);
    update(p);   
} 
int pre(int p,int x)
{
    if(!p)
    {
        return -inf;
    }
    if(v[p]>x)
    {
        return pre(son[p][0],x);
    }
    else
    {
        return max(v[p],pre(son[p][1],x));    
    }
}
int suc(int p,int x)
{
    if(!p) return inf;
    if(v[p]<x)
    {
        return suc(son[p][1],x);
    }
    else
    {
        return min(v[p],suc(son[p][0],x));
    }
}
int main()
{
    int n;
    int ans=0;
    int a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(i==1)
        {
            ans+=a;
        }
        else
        {
            ans+=min(abs(a-suc(root,a)),abs(a-pre(root,a)));
        }
        add(root,a);
    }
    printf("%d\n",ans);
    return 0;
}