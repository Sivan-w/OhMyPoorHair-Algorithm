#include<stdio.h>
#include <iostream>
using namespace std;
int main() {
    char s[81], * pi, * pj;
    cin.getline(s, 80);
    pi = s; pj = s;
    while (*(pj+sizeof(char))) 
    {
        pj = pj + sizeof(char);
    }
    while ((pi < pj) && (*pi == *pj)) {
        pi++; pj--;
    }
    if (pi < pj) {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}