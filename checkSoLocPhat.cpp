/* check so loc phat 
Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8. Nhập vào một số 
nguyên dương không quá 9 chữ số, hãy kiểm tra xem đó có phải số lộc phát hay 
không. Nếu đúng in ra 1, sai in ra 0*/
#include<stdio.h>


int check(int n){
	while(n>0){
		if((n%10)%6==0 || (n%10)%8==0)  {
			n/=10;
		}else {
			return 0;
			
		}
	}
	return 1;
}
int main(){
	int n;
	do{
		printf("nhap n :");
		scanf("%d",&n);
		if(n>1000000000-1|| n<=0){
			printf("n nhap vao k hop le, moi nhap lai n\n");
		}
	
	} while(n>1000000000-1 || n<=0);
	if(check(n)) printf("%d la so loc phat",n);
	else printf("%d khong phai so loc phat",n);
	
	return 0;
}