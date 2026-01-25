// dung ham viet chuong trinh kiem tra so do co phai la so nguyen to k va in kqua ra man hinh 
#include<stdio.h>
#include<math.h>
	int check(int n){
		for(int i=2;i<n;i++){
			if(n%i==0){
				return 0;
			}
				
		}  return 1;
	}
	int main(){
		int x;
		do{
			printf("nhap x=");
			scanf("%d",&x);
			if(x<=1) printf("moi nhap lai x \n");
		} while(x<=1);
		check(x);
		if(check(x)) printf("%d la so nguyen to",x);
		else printf("%d khong phai la so nguyen to",x);
	}