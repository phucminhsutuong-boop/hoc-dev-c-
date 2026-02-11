#include<stdio.h>

int main(){
	int n,count=1;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		if(n>0){
			n/=10;
			count++;
		}
	}
	printf("%d",count);
	return 0;
}