#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int n,m;
struct pe
{
    int num,sco;
}a[10001];
bool cmp(pe a,pe b)
{
    if(a.sco!=b.sco) return a.sco>b.sco;
    else return a.num<b.num;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].num>>a[i].sco;
    }
    sort(a+1,a+n+1,cmp);
    m=floor(m*150/100);
    m=a[m].sco;
    cout<<m<<" ";
    int i=1;
    int cnt=0;
    while(a[i].sco>=m)
    {
        i++;
        cnt++;
    }
    cout<<cnt<<endl;
    i=1;
    while(a[i].sco>=m)
    {
        cout<<a[i].num<<" "<<a[i].sco<<endl;
        i++;
    }
    return 0;
}