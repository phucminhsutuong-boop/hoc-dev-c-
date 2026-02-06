// mang 1 chieu in ra thu tu giam dan
#include<stdio.h>

void nhap(int a[], int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int so_sanh(int a[], int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j] =temp;	
			}
		
		}
			
		
	}
}

void in(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	so_sanh(a,n);
	in(a,n);
	
	return 0;
}