#include<iostream>
#include<cstdlib>

using namespace std;

int climb(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n==2)
        return 2;//或者不写这个if，改n=0时return 1;
    else
        return climb(n-1)+climb(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<climb(n);
    system("pause");
    return 0;
}

//优化
// int ClimbStairs(int n)
// {
//     int i;
//     int f[50]={1,1};  //f[0] and f[1]赋初值
//     for(i=2; i<=n; i++)
//     {
//         f[i]=f[i-1]+f[i-2];
//     }
//     return 0;
// }
