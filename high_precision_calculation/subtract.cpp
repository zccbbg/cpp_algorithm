#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int a[256],b[256],c[256],lena,lenb,lenc,i;
    char n[256],n1[256]="1001",n2[256]="2001";//n1被减数，n2减数
    memset(a,0,sizeof(a));//memset用于初始化数组或一块内存区域，将其中的每个字节都设置为指定的值。将数组a的值全部初始化为0
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    //如果被减数小于减数
    if(strlen(n1)<strlen(n2)||(strlen(n1)==strlen(n2)&&strcmp(n1,n2)<0)){
        strcpy(n,n1);
        strcpy(n1,n2);
        strcpy(n2,n);
        cout<<"-";
    }
    lena=strlen(n1);lenb=strlen(n2);
    for(i=0;i<=lena-1;i++){
        a[lena-i]=int(n1[i]-'0');
    }
    for(i=0;i<=lenb-1;i++){
        a[lenb-i]=int(n2[i]-'0');
    }
    i=1;
    while(i<=lena||i<=lenb){
        if(a[i]<b[i]){
            a[i]+=10;//不够减，那么想高位借1当10
            a[i+1]--;
        }
        c[i]=a[i]-b[i];//对应位相减
        i++;
    }
    lenc=i;
    while((c[lenc]==0)&&(lenc>1)) {
        lenc--;//最高位的0不输出
    }
    for(i=lenc;i>=1;i--) {
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}
