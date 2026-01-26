// viet vao 1 mang so va co bao nhiu so le 
#include<stdio.h>

void nhap(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int le=0;

int sole(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			le+=1;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	sole(a,n);
	printf("%d",le);
	return 0;
} // 26/1/2026