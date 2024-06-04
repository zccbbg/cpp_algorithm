#include<bits/stdc++.h>
//
// Created by zccbbg on 2023-10-20.
//
using namespace std;
int a1[200],b1[200],c[200];
int main(){
    char a[200]="10012",b[200]="4";
    int lena=strlen(a);
    int lenb=strlen(b);
    for(int i=1;i<=lena;i++){
        a1[i]=a[lena-i]-'0';
    }
    for(int i=1;i<=lenb;i++){
        b1[i]=b[lenb-i]-'0';
    }
    int lenc=1;
    int x=0;
    while(lenc<=lena||lenc<=lenb){
        c[lenc]=a1[lenc]+b1[lenc]+x;
        x = c[lenc]/10;
        c[lenc]%=10;
        lenc++;
    }
    c[lenc]=x;
    while(c[lenc]==0&&lenc>1){
        lenc--;
    }
    for(int i=lenc;i>=1;i--){
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}