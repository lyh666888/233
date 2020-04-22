#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct stu
{
    int inn,ch,ma,en,sum;
}a[1001];
bool cmp(stu a,stu b)
{
    if(a.sum!=b.sum)
    {
        return a.sum>b.sum;
    }
    else
    {
        if(a.ch!=b.ch)
        {
            return a.ch>b.ch;
        }
        else
        {
            return a.inn<b.inn;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].ch>>a[i].ma>>a[i].en;
        a[i].inn=i;
        a[i].sum=a[i].ch+a[i].ma+a[i].en;233
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=5;i++)
    {
        cout<<a[i].inn<<" "<<a[i].sum<<endl;
    }
    return 0;
    return -1;
}