#include<iostream>
#include<cstdlib>
using namespace std;

int n;
int ans[21];
int mark[20]={0};

void dfs(int step)
{
    if(step==n+1)
    {
        for(int i=0;i<=step;i++)
            cout<<ans[i];
        cout<<endl;
    }
    for(int i=0;i<=n;i++)
    {
        if(mark[i]==0)
        {
            ans[step]=i;
            mark[i]=1;
            dfs(step+1);
            mark[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    dfs(0);
    system("pause");
    return 0;
}