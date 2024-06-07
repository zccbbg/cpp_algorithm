// 例3.1 数塔问题
#include<iostream>
using namespace std;

int main(){
    int n=5,i,j,a[101][101];
    a[1][1] = 7;
    a[2][1] = 3; a[2][2]=8;
    a[3][1] = 8; a[3][2]=1; a[3][3]=0;
    a[4][1] = 2; a[4][2]=7; a[4][3]=4; a[4][4]=4;
    a[5][1] = 4; a[5][2]=5; a[5][3]=2; a[5][4]=6; a[5][5]=5;

    for(i = n-1;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<< "i: "<<i<<" j: "<<j<<endl;
            cout<<"a["<<i+1<<"]["<<j<<"]: " <<a[i+1][j]<<" "<<endl;
            cout<<"a["<<i+1<<"]["<<j+1<<"]: "<<a[i+1][j+1]<<" "<<endl;
            cout<<"a["<<i<<"]["<<j<<"] origin: "<<a[i][j]<<" "<<endl;
            if(a[i+1][j]>=a[i+1][j+1]){
                a[i][j]+=a[i+ 1][j];
            }else{
                a[i][j]+=a[i+1][j+1];
            }
            cout<<"a["<<i<<"]["<<j<<"] now: "<<a[i][j]<<" "<<endl<<endl;
        }

    }
    cout<<a[1][1]<<endl;
}
