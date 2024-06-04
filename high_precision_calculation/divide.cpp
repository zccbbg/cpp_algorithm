#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char a1[100]="1256";
    int a[100],c[100],lena,i,x=0,lenc,b=3;//a 用于存储被除数，c 用于存储商，x 用于保存进位，lenc 用于记录商的长度，b 是除数。
    //分别用于将数组 a 和 c 初始化为零。
    memset(a,0,sizeof(a));
    memset(c,0,sizeof(c));

    lena = strlen(a1);
    for(i=0;i<=lena-1;i++){//循环遍历被除数的字符，将其转换为整数并存储在数组 a 中。这是将字符数组形式的大整数转换为整数数组形式的关键步骤。
        a[i+1]=a1[i]-'0';
    }
    //遍历数组 a 中的每个数字，逐位执行除法操作，同时考虑上一位的余数 x。商被存储在数组 c 中，余数被保存在 x 中。
    for(i=1;i<=lena;i++){
        c[i]=(x*10+a[i])/b;//计算当前位置的值
        x=(x*10+a[i])%b;//取余，用于下一位的计算
    }
    lenc=1;//初始化商的长度。

    while(c[lenc]==0 && lenc<lena){//去除商中高位的零，同时更新商的长度 lenc。
        lenc++;
    }
    for(i=lenc;i<=lena;i++){
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}
