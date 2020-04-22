#include<iostream>
#include<algorithm>
#define maxn 2000005
using namespace std;
int a[maxn],b[maxn],c[maxn];
int n;
bool cmp(int a,int b)
{
    return a<b;
}
int ef(int x)
{
    
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        c[i]=a[i]-b[i];
    }
    sort(c+1,c+n+1,cmp);
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        int x=0-c[i]+1;
        int a=ef(x);
        ans+=n-a+1;
    }
    cout<<ans<<endl;
    return 0;
}