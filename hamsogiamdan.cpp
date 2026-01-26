#include<stdio.h>

void nhap(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int gan;
int sosanh(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]>a[j]){
            gan=a[i];
            a[i]=a[j];
            a[j]=gan;	
			}
            
        }
    }
}
int in(int a[], int n){
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    nhap(a,n);
    sosanh(a,n);
    in(a,n);
    return 0;    
} //26/1/2026 