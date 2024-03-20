// 202023615 함채현 C++프로그래밍(8758) 9주차 과제

/*
// 8. 원을 추상화한 Circle 클래스는 간단히 아래와 같다...
#include <iostream>
using namespace std;

class Circle;

class Circle{
    int radius;
    public:
    Circle(int radius=0) {this->radius = radius;}
    void show() {cout << "radius : " << radius <<endl;}
    
    friend Circle& operator++(Circle& obj) {obj.radius++; return obj;}
    friend Circle operator++(Circle& obj, int x){
        Circle c = obj;
        c.radius++;
        return c;

        }
};

int main(){
    Circle a(5), b(4);
    ++a;
    b = a++;
    a.show();
    b.show();
}
*/

// 9. 문제 8의 Circle객체에 대해 다음 연산이 가능하도록 연산자를 구현하라
#include <iostream>
using namespace std;
class Circle;

class Circle{
    int radius;
    public:
    Circle(int radius=0) {this->radius = radius;}
    void show() {cout << "radius : " << radius <<endl;}
    friend Circle operator+(int op, Circle obj);
};

Circle operator+(int op, Circle obj){
    Circle c;
    c.radius = obj.radius+1;
    return c;
}

int main(){
    Circle a(5), b(4);
    b = 1 + a;
    a.show();
    b.show();
}