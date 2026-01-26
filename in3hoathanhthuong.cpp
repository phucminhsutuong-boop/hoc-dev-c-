// viet ham nhap 3 chuoi hoa sau do chuyen lai thanh thuong 
#include<stdio.h>
#include<string.h>

void nhap1(char a[100]){
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>=65 & a[i]<=90)
		a[i]+=32;
	}

}

void nhap2(char b[100]){
	scanf("%s",b);
	for(int i=0;i<strlen(b);i++){
		if(b[i]>=65 & b[i]<=90)
		b[i]+=32;
	}

}


void nhap3(char c[100]){
	scanf("%s",c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>=65 & c[i]<=90)
		c[i]+=32;
	}

}

int main(){
 char a[100], b[100] , c[100];
 nhap1(a);
 nhap2(b);
 nhap3(c);	
 printf("%s\n%s\n%s",a,b,c);
	return 0;
}