#include<iostream>
#include<cstring>
using namespace std;
const int MAXN=10001;

int main(){
    int b[101],n=8,i,j,k;
    float a[MAXN];
    memset(b,0,sizeof(b));
    a[1]=10;a[2]=6;a[3]=7;a[4]=1;a[5]=2;a[6]=16;a[7]=18,a[8]=9;
    for(i=1;i<=n;i++){
        k=a[i];
        b[k]++;
    }
    for(i=0;i<=100;i++){
        while(b[i]>0){
            cout<<i<<" ";
            b[i]--;
        }
    }
    cout << endl;
    return 0;
}
