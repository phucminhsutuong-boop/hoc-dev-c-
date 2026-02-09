// day so sum 
#include<stdio.h>

long long recursion(int n){
	if(n==1){
		return 1;
	} if(n==0) return 0;
	return n+recursion(n-1);
}
int main(){
	long long n;
	scanf("%d",&n);
	printf("%d",recursion(n));
	return 0;
}