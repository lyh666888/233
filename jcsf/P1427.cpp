#include<iostream>
using namespace std;
int a[1001];
int main()
{
    int b;
    int k=1;
    for(int i=1;;i++)
    {
        cin>>b;
        if(b==0)
        {
            break;
        }
        else
        {
            a[i]=b;
        }
        k++;
    }
    for(int i=k-1;i>=1;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}