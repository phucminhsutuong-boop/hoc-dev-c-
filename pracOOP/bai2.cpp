// Bạn hãy viết chương trình nhập từ bàn phím chiều dài và chiều rộng của một hình chữ nhật và hiển thị ra màn hình : area va perimeter 
#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
        double length;
        double width;
    public:
        void getInformation(){
            cin>>length;
            cin>>width;
        }
        
        double getArea(){
            return  length*width;
        }
        double getPerimeter(){
            return (length+width)*2;
        }
        void display(){
            cout<<"Area: "<< getArea() <<endl;
            cout<<"Perimeter: "<< getPerimeter()<<endl;
        }
};
int main(){
    Rectangle r;
    
    double length=1;
	double width=1;

	r.getInformation();
    r.getArea();
    r.getPerimeter();
    r.display();
    return 0;
}