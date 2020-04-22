#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    freopen("input.in","w",stdout);
    cout<<100000<<" "<<10000<<endl;
    for(int i=1;i<=100000;i++)
    {
        cout<<1<<" ";
    }
    cout<<endl;
    for(int i=1;i<=10000;i++)
    {
        cout<<2<<" "<<0<<endl;
    }
    return 0;
}