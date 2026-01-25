#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *f;
	
	f=fopen("baitest.txt","w");
	if(f==NULL){
		printf("mo hoac doc file bi loi \n");
		exit(0);
	}
	int n;
	scanf("%d",&n);
	fprintf(f,"%d",n);
	
	fclose(f);
	
	return 0;
}