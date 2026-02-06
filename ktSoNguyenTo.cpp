#include<stdio.h>
int kt(int n){
	int dem=1;
	for(int i=2;i<n;i++){
	if(n%i==0){
		dem=0;
		break;
     	}
	} return dem;
}
int main(){
	int n;
	scanf("%d",&n);
	kt(n);
	if(kt(n)) printf("true");
	else printf("false");
	return 0;
}