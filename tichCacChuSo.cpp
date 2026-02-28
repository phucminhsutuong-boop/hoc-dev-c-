#include<stdio.h>
int tich(int n){
	int temp=1;
	while(n>0){
	
		temp*=n%10;
		n/=10;
	}
	return temp;
}
int main(){
	int n;
	scanf("%d",&n);
	int kq=tich(n);
	printf("%d",kq);
	return 0;
} //28/2/2026
