#include<stdio.h>

void nhap1(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void nhap2(int b[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
}
int max01=0;
int max1(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>max01)
            max01=a[i];
        
    }
}

int max02=0;
int max2(int b[], int n){
    for(int i=0;i<n;i++){
        if(b[i]>max02)
            max02=b[i];
      
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    nhap1(a,n);
    int m;
    scanf("%d",&m);
    int b[m];
    nhap2(b,m);
    max1(a,n);
    max2(b,m);
    printf("%d %d",max01,max02);
    return 0;
    } //26/1/2026