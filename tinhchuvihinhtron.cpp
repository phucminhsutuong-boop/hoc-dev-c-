// tinh chu vi cua hinh tron
#include<stdio.h>
double cv=0;
void tinh(double n){
	cv=2*n*3.14;
}
int main(){
	double n;
	scanf("%lf",&n);
	tinh(n);
	printf("%.6lf",cv);
	return 0;
} //26/1/2026