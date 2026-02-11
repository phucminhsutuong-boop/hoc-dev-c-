// dem so (count digit) cho mot so nguyen n va dem xem so do co bao nhiu chu so 
#include<stdio.h>

int recursion(int n){
	int count =1;
	if(n<10) return 1;
	return count+ recursion(n/=10); 
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",recursion(n));
	return 0; 
}