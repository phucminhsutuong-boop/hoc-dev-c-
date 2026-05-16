// bai 1 codelearn 
// viet ra 1 class Student chua name, age, ham getInformation va display voi nhiem vu la viet ten va in ten ra man hinh
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int age;
    public:
        void getInformation(){
            cin>>name;
            cin>>age;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl; 
        }
};
int main(){
    Student s;
    s.getInformation();
    s.display();
    return 0;
} //16/5/2026