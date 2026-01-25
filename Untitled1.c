#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
	
struct sinhvien{
	char ma[100];
	char ten[100];
	double diem;
};

typedef struct sinhvien sv;

void nhap(sv* x){
	scanf("%s",&x->ma);
	getchar();
	gets(x->ten);
	scanf("%lf",&x->diem);
}

void in(sv x){
	printf("%s %s %.2lf \n",x.ma,x.ten,x.diem);
}

void diemcao(sv a[], int n){
	float res; int pos;
	for(int i=0;i<n;i++){
		if(a[i].diem>res){
			res=a[i].diem;
			pos=i;
		}
	}
	in(a[pos]);
}
int main(){
	int n;
	scanf("%d",&n);
	sv a[n];
	for(int i=0;i<n;i++) nhap(&a[i]);
	for(int i=0;i<n;i++) in(a[i]);
	diemcao(a,n);
}



