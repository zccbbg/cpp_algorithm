// 例5.1 素数环
#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

bool b[11]={0};
int total=0,a[11]={0};

void search(int);       // 回溯过程
void print();           // 输出方案
bool pd(int,int);      // 判断素数

int main(){
    search(1);
    cout<<total<<endl;  // 输出总方案数
}
void search(int t){
    int i;
    for(i=1;i<=10;i++){
//        cout<< "i:"<<i<<" t:"<< t<< " a["<<t-1<<"]:"<< a[t-1]<<endl;
        if(pd(a[t-1],i) && (!b[i])){
            a[t]=i;
            b[i]=1;
            if(t==10){
                if(pd(a[10],a[1])){
                    print();
                }
            }else{
                search(t+1);
            }
            b[i] = 0;
        }
    }
}

void print(){
    total++;
    cout<<"<"<<total<<">";
    for(int j=1;j<=10;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
}

bool pd(int x,int y){
    int k=2,i=x+y;
    while(k<=sqrt(i) && i%k!=0){
        k++;
    }
    if(k>sqrt(i)){
        return 1;
    }else{
        return 0;
    }
}