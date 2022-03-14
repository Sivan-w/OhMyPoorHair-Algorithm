#include<iostream>
using namespace std;

int display(int num){
    if(num<10)
        cout<<0;
    return num;
}
int main(){
    long long int time;
    cin>>time;
    time=time/1000%(24*60*60);
    int h=time/3600,m=time%3600/60,s=time%3600%60;
    cout<<display(h)<<':'<<display(m)<<':'<<display(s);
    //或者printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
