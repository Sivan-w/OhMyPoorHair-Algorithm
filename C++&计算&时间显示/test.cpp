#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>

using namespace std;

int display(int num)
{
    if(num<10)
        cout<<0;
    return num;
}
int main()
{
    string info;
    int time;
    cin>>info;
    if(info.length()>=5)
        info=info.substr(info.length()-5,info.length());
    stringstream exchange(info);
    exchange>>time;
    time=time%(24*60*60);
    cout<<display(time/3600)<<':'<<display(time%3600/60)<<':'<<display(time%3600%60);
    system("pause");
    return 0;
}
