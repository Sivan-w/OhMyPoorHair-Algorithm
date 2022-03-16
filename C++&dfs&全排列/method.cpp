#include<iostream>
#include<cstdlib>
using namespace std;

int n;           //求 1~n的全排列
int ans[20];     //将每次的排列结果存入ans数组
int mark[20]={0};//标记1~n个数的使用情况，i用mark[i-1]来标记

void dfs(int step)
{
    if(step==n)  //此时ans[n-1]已存满，输出结果
    {
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        if(mark[i-1]==0)  //mark[i-1]标记第i个数，即i
        {
            ans[step]=i;
            mark[i-1]=1;  //标记
            dfs(step+1);  //递归入栈
            mark[i-1]=0;  //回溯法，出栈
        }
    }
}
int main()
{
    cin>>n;
    dfs(0);
    return 0;
}