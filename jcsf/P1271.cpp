#include<iostream>
using namespace std;
int a[1001]={0};
int m;
int main()
{
    int n;
    cin>>n>>m;
    int c;
    for(int i=1;i<=m;i++)
    {
        cin>>c;
        a[c]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i])
        {
            for(int j=1;j<=a[i];j++)
            {
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
    return 0;
}