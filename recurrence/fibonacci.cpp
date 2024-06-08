// 例3.2 斐波那契数列
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int f0 =1,f1 =1,f2;
    int n=20;
    for(int i=3;i<=n;i++){
        f2= f0+f1;
        cout << f2 <<" ";
        f0 = f1;
        f1 = f2;
    }
    return 0;
}