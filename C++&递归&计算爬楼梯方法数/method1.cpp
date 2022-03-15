#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int step;
    cin>>step;
    int first=0,second=1,goal=0,i=0;
    while (i<step)
    {
        i++;
        goal=first+second;
        first=second;
        second=goal;
    }
    cout<<goal;
    system("pause");
    return 0;
}