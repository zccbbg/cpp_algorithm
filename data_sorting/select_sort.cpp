#include<iostream>
using namespace std;

const int MAXN=10001;
int main(){
    int n=8,k,i,j;
    float temp,a[MAXN];
    a[1]=10;a[2]=6;a[3]=7;a[4]=1;a[5]=2;a[6]=16;a[7]=18,a[8]=9;
    for(i=1;i<=n;i++){
        k=i;
        for(j=i+1;j<=n;j++){
            if(a[j]<a[k]){
                k=j;
            }
        }
        if(k!=i){
            temp = a[i];
            a[i] = a[k];a[k]=temp;
        }
    }
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}