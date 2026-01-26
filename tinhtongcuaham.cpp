// viet ham tinh tong cua 1 mang 
#include<stdio.h>

void nhap(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int sum=0;
int tong(int a[], int n){
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	tong(a,n);
	printf("%d",sum);
}