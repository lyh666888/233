#include<bits/stdc++.h>
using namespace std;
int t=0,n,m;
void bfs(int x,int y)
{
    if(y<0||x>m||y>n)
    {
        return ;
    }
    if(x==m&&y==n)
    {
        t++;
    }
    else
    {
        bfs(x+1,y-2);
        bfs(x+1,y+2);
        bfs(x+2,y+1);
        bfs(x+2,y-1);
    }
    
}
int main()
{
    cin>>n>>m;
    bfs(0,0);
    cout<<t<<endl;
    return 0;
}