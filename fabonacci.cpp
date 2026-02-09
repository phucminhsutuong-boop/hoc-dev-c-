// day fabanacci
#include<stdio.h>

long long recursion(long long n){
	if(n==0) {
		return 0;
	}if (n==1) {
		return 1;
	} return recursion(n-1)+recursion(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",recursion(n));
}