// C2 : viet mot chuoi chu so, neu co chu so hoa thi chuyen thanh chu thuong 
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A' & s[i]<='Z')
		s[i]+=32;
	}
	printf("%s",s);
	return 0;
}