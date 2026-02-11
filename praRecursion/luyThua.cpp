// luy thua 
#include<stdio.h>
#include<math.h>


int recursion(int n, int m){
	if(m==0) return 1;
	return n*recursion(n,m-1);
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",recursion(n,m));
	return 0;
}