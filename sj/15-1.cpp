#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int a;
    for(int i=1;i<=m;i++)
    {
        cin>>a;
        cout<<v[a-1]<<endl;
    }
    return 0;
}