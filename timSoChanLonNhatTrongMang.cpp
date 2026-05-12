// tim so chan lon nhat trong mang 
#include<stdio.h>

int main(){
 	// nhap 1 chuoi va in ra chuoi do 
 	int n;
 	printf("nhap so phan tu toi da cua mang: \n");
 	scanf("%d",&n);
 	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d \n: ",i+1);
 		scanf("%d",&a[i]);
	 }
	 // thuat toan tim so chan lon nhat 
	int Even_max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]%2==0 & a[i]>Even_max){
	 		Even_max=a[i];
		 }
	}
	 
	printf("%d",Even_max);
	return 0;
}