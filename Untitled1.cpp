// nhap vao 1 chuoi, neu co chu so in thuong thi doi thanh chu so hoa
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 & s[i]<=122)
		s[i] -=32;
	}
	printf("%s",s);
	return 0;
}