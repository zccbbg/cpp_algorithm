#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int n=10,a[101],b[101],ans,i;//n=10代表十进制，也可以改成8或者16等
void init(int a[]){
    string s="921";
    memset(a,0,sizeof(a));
    a[0]=s.length();
    for(int i=1;i<=a[0];i++) {
        if (s[a[0] - i] >= '0' && s[a[0] - i] <= '9') {
            a[i] = s[a[0] - i] - '0';
        } else {
            a[i] = s[a[0] - i] - 'A' + 10;//16进制的处理
        }
    }
}
bool check(int a[]){
    for(i=1; i<=a[0];i++){
        if(a[i]!=a[a[0]-i+1]){
            return false;
        }
    }
    return true;
}
void jia(int a[]){
    int i;
    for(i=1;i<=a[0];i++){
        b[i]=a[a[0]-i+1];//反序数b
    }
    for(i=1;i<=a[0];i++){
        a[i]+=b[i];
    }
    for(i=1;i<=a[0];i++){
        a[i+1]+=a[i]/n;
        a[i]%=n;
    }
    if(a[a[0]+1]>0){
        a[0]++;
    }
}
void printArray(int a[]){
    int size = a[0];
    cout<<"size: "<<size<<endl;
    for (  int  i=size;i>0;i-- ){
        cout << a[i] << " "  ;
    }
    cout <<endl ;  //
}
int main(){
    init(a);
    cout<<"init:"<<endl;
    printArray(a);
    if(check(a)){
        cout<<0<<endl;
        return 0;
    }
    ans=0;
    while(ans<=30){
        ans++;
        jia(a);
        cout<<"Test: "<<ans<<"  ";
        printArray(a);
        if(check(a)) {
            cout << ans << endl;
            return 0;
        }
    }
    cout<<"impossible";
    return 0;
}