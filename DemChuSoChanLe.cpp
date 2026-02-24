/* buoi 4 bai 10 
Nhập một số nguyên dương N không quá 9 chữ số. Hãy đếm xem N có bao
nhiêu chữ số lẻ và bao nhiêu chữ số chẵn. Nếu không tồn tại số lẻ hoặc số chẵn thì
in ra kết quả là 0 cho loại số tương ứng
INPUT
12345678
OUTPUT
4 4 */
#include<stdio.h>
#include<math.h>

long long count_even=0;
long long even(long long n){
	while(n>0 ){
		if(n%2==0){
			count_even++;
		}
		n/=10;
	}
}

long long count_odd=0;
long long odd(long long n){
	while(n>0 ){
		if(n%2!=0){
			count_odd++;
		}
		n/=10;
	}
}
int main(){
	long long n;
	do{
		printf("moi nhap n :");
		scanf("%lld",&n);
		if(n<=0 || n >1000000000-1){
			printf("nhap n sai, vui long nhap lai \n");
		}
	}while(n<=0 || n >1000000000-1);
	even(n);
	odd(n);
	printf("%lld %lld",count_even, count_odd);
	return 0;
} // 24/2/2026 
/*đánh giác của shop copilot và chấm điểm 
Mình chấm 7/10 nha shop.
Chi tiết nhanh:

Đúng yêu cầu logic (3/4): Đếm dựa trên chẵn/lẻ của chữ số cuối → ra kết quả đúng cho 1 test.
Ràng buộc đầu vào (1/2): Chưa đúng “nguyên dương, ≤ 9 chữ số”; đang cho phép 0 và điều kiện không thống nhất.
Tính ổn định/thiết kế (1/2): Hàm khai báo long long nhưng không return; dùng biến toàn cục không reset → dễ cộng dồn khi test nhiều lần.
Hiệu năng/Phong cách (2/2): Dù duyệt 2 lần nhưng vẫn O(k) với k ≤ 9, chấp nhận được ở bài này; code gọn, dễ đọc.

Gợi ý để lên 9–10/10:

Đổi 2 hàm sang void hoặc trả về số đếm (bỏ biến global).
Kiểm tra input đúng chuẩn: 1 ≤ n ≤ 999999999 (và thống nhất một điều kiện).
Gộp thành một vòng lặp đếm cả chẵn lẫn lẻ; bỏ #include <math.h> không dùng.

Nếu muốn mình refactor 1 phiên bản “chuẩn chỉnh” nhất (không global, 1 vòng lặp), nói mình làm liền nha 👍. */
