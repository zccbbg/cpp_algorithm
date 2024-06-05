//
// Created by zccbbg on 2024-06-05.
//
#include<iostream>
using namespace std;
void qsort(int,int);
int a[101];

int main(){
    int n=8,i;
    a[1]=10;a[2]=6;a[3]=7;a[4]=10;a[5]=2;a[6]=16;a[7]=18,a[8]=9;
    qsort(1,n);
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void qsort(int l, int r){
    int i,j,mid,p;

    int n =8;
    int z;
    i = l; j = r;
    mid = a[(l+r)/2];
    for(z=1;z<=n;z++){
        cout<<a[z]<<" ";
    }
    cout<<endl;
    while(i<=j){
        cout<<"i: "<<i<<" "<<" j: "<<j<<" ";
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j){
            p = a[i];
            a[i] = a[j];
            a[j] = p;
            i++;
            j--;
        }
    }

    cout<<endl;
    if(l<j){
        qsort(l,j);
    }
    if(i<r){
        qsort(i,r);
    }
}