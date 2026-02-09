// day so sum 
#include<stdio.h>

long long recursion(long long n){
	if(n==1){
		return 1;
	} if(n==0) return 0;
	return n+recursion(n-1);
}
int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",recursion(n));
	return 0;
} // 9/2/2026
// AI noi minh la nen su dung long long chu k nen dung int vi so bi tran so 