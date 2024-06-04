#include<iostream>
using namespace std;
const int MAXN=10001;

int main(){
    int n=8,i,j;
    float temp,a[MAXN];
    a[1]=10;a[2]=6;a[3]=7;a[4]=1;a[5]=2;a[6]=16;a[7]=18,a[8]=9;
    bool ok;
    for(i=n;i<=n;i--){
        ok = true;
        for(j=1;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                ok = false;
            }
        }
        if(ok == true){
            break;
        }
    }
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
