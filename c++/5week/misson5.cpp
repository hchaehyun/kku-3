// 202023615 함채현 C++프로그래밍(8758) 5주차 과제
// 실습문제 1번, 5번, 11번

// 1. 두 개의 Circle 객체를 교환하는 swap() 함수를 '참조에 의한 호출'이 되도록 작성하고 
// 호출하는 프로그램을 작성하라.

/*
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() {radius = 1;}
    Circle(int r) {radius = r;}
    double getArea() {return 3.14 * radius*radius;}
    int getRadius() {return radius;}
    void setRadius(int radius) {this->radius = radius;}
};
void swap(Circle &a, Circle &b) {
    Circle tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main() {
    Circle a;
    Circle b(10);
    cout << "a 반지름 " << a.getRadius() << " b 반지름 " << b.getRadius() << endl;
    cout << "swap 후>>" << endl;
    swap(a, b);
    cout << "a 반지름 " << a.getRadius() << " b 반지름 " << b.getRadius() << endl;
}



// 5. 다음 Circle 클래스가 있다. main() 함수의 목적을 달성하도록 increaseBy() 함수를 수정하라.
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) {radius = r;}
	int getRadius() {return radius;}
	void setRadius(int r) {radius = r;}
    void show() {cout << "radious is : " << radius << " Circle" << endl; }
};

void increaseBy(Circle &a, Circle &b) {
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}

int main() {
    Circle x(10), y(5);
    increaseBy(x, y);
    x.show();
}

*/


// 11. 책의 이름과 가격을 저장하는 다음 Book 클래스에 대해 물음에 답하여라.
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
 
class Book {
    string title;
    int price;
public:
    Book(string title, int price);
    void set(string title, int price);    
    void show() {cout << title << ' ' << price << "원" << endl;}
};
 
Book::Book(string title, int price){
    this->price = price;
    this->title = title;
}
 
void Book::set(string title, int price){
    this->price = price;
    this->title = title;
}
 
int main(){
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}

