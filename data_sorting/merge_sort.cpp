//
// Created by zccbbg on 2024-06-06.
//
#include<iostream>
using namespace std;
void msort(int,int);
int a[101];
int r[101];

int main(){
    int n=8,z;
    a[1]=10;a[2]=6;a[3]=7;a[4]=10;a[5]=2;a[6]=16;a[7]=18,a[8]=9;
    msort(1,n);
    cout<<"after sort:"<<endl;
    for(z=1;z<=n;z++){
        cout<<a[z]<<" ";
    }
    cout<<endl;
    return 0;
}
void msort(int start, int end){
    if(start == end){
        return;
    }
    int mid = (start + end) / 2;

    msort(start, mid);//分解左序列
    msort(mid+1, end);//分解右序列
    cout << "start: " << start << " " << " mid: " << mid << " " << " end: " << end << " ";
    cout<<endl;
    int innerStart=start,innerMid= mid + 1,k=start;//接下来合并
    cout << "inner start: " << innerStart << " " << "inner mid: " << innerMid << " k: " << k << " ";
    cout<<endl;
    while(innerStart <= mid && innerMid <= end){
        if(a[innerStart] <= a[innerMid]){
            r[k]=a[innerStart];
            k++;
            innerStart++;
        }else{
            r[k]=a[innerMid];
            k++;
            innerMid++;
        }
    }

    while (innerStart <= mid){
        r[k]=a[innerStart];
        k++;
        innerStart++;
    }

    while(innerMid <= end){
        r[k]=a[innerMid];
        k++;
        innerMid++;
    }
    cout << "after inner sort: ";
    for(int i=start; i <= end; i++){
        a[i] = r[i];
        cout << a[i] << " ";
    }
    cout<<endl;
    cout<<endl;
}
