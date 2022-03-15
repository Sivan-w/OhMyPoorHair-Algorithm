#include<iostream>
using namespace std;

int min(int num1,int num2){
    return num1>num2 ? num2 : num1;
}
int main(){   
    //value表示过这个台阶的花费，cost表示到这个台阶的最小花费
    int value[20]={2,4,3,1,6,2,5,3,8,6,3,2,5,0,1,6,2,1,7,8};
    int cost[20]={0,0};  //从0或者1阶出发的cost是0
    int goal;
    cin>>goal;
    for(int i=2;i<=goal;i++){
        cost[i]=min(cost[i-1]+value[i-1],cost[i-2]+value[i-2]);
    }
    cout<<cost[goal];
    return 0;
}