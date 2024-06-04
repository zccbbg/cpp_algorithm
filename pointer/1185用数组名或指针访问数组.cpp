#include <iostream>
int main(){
	int a[5],i, *pa=a;
	for(i=0;i<5;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<5;i++){
		printf("a[%d]=%d\n",i,*(a+i));// 可以写成*(pa+i) 或 pa[i] 或 a[i]
	}
    return 0;  
} 
