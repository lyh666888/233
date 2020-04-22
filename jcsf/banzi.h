#include<iostream>
#define maxn 1000001
class bcj
{
    int fa[maxn];
    int n;
    void init()
    {
        for(int i=1;i<=n;i++)
        {
            fa[i]=i;
        }
    }
    int find(int x)
    {
        if(x==fa[x]) return x;
        else return fa[x]=find(fa[x]);
    }
    void merge(int x,int y)
    {
        int a=find(x),b=find(y);
        fa[a]=b;
    }
};
