#include<cstdio>

const int LP= 100001;
int n,m,k ;
int x[LP],y[LP],d[LP];
int c[LP];
int * a[LP];

int main(){
	for(int i=1;i<=k;i++){
		scanf("%d%d%d",&x[i],&y[i],&d[i]);
		c[y[i]]++;
	}
	for(int i=1;i<=m;i++){
		a[i]= new int[c[i]];
	}
	for(int i=1;i<=k;i++){
		a[y[i]][0]=d[i];//也可以写成：*a[y[i]]=d[i];
		a[y[i]]++;
	}
	
	for(int i=1;i<=m;i++){
		a[i]=a[i]-c[i];
		for (int j=1;j<=c[i];j++,a[i]++){
			printf("%d ",*(a[i]));
		}
	}
	return 0;
}