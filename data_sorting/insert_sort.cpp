#include<iostream>
using namespace std;
const int MAXN=10001;

int main(){
    int n=8,i,j,k;
    float temp,a[MAXN];;
    a[1]=10;a[2]=6;a[3]=7;a[4]=1;a[5]=2;a[6]=16;a[7]=18,a[8]=9;
    for(i=1;i<=n;i++){
        for(j=i-1;j>=1;j--){
            if(a[j]<=a[i]){
                break;
            }
        }
        if(j!=i-1){
            temp = a[i];
            for(k=i-1;k>j;k--){
                a[k+1]=a[k];
            }
            a[k+1]=temp;
        }
    }
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
