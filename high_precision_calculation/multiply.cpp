#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char a1[101]="222",b1[101]="2";
    int a[101],b[101],c[10001],lena,lenb,lenc,i,j,x;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    lena=strlen(a1);
    lenb= strlen(b1);

    for(i=0;i<lena;i++){
        a[lena-i]=a1[i]-48;
    }
    for(i=0;i<lenb;i++){
        b[lenb-i]=b1[i]-48;
    }

    for(i=1;i<=lena;i++){
        x=0;//用于存放进位
        for(j=1;j<=lenb;j++){//对乘数的每一位进行处理
            c[i+j-1]=a[i]*b[j]+x+c[i+j-1];//当前乘积+上次乘积进位+原数
            x=c[i+j-1]/10;
            c[i+j-1]%=10;
        }
        c[i+lenb]=x;
    }
    lenc=lena+lenb;
    while(c[lenc]==0 && lenc>1){
        lenc--;
    }
    for(i=lenc;i>=1;i--){
        cout<<c[i];
    }
    cout<<endl;
}