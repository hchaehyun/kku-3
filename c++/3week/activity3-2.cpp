/*

//3-7
#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;

    Circle();
    Circle(int r);
    ~Circle();
    double getArea();

};

Circle::Circle(){
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle(){
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    Circle pizza(30);

    return 0;
}



//3-8
#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();

};

Circle::Circle(){
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle(){
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(){
    Circle mainDonut;
    Circle mainPizza(30);
}



//3-9
#include <iostream>
using namespace std;

class PrivateAccessError{
    private:
    int a;
    void f();
    PrivateAccessError();

    public:
    int b;
    PrivateAccessError(int x);
    void g();
};

PrivateAccessError::PrivateAccessError(){
    a = 1; //1
    b = 1; //2
}

PrivateAccessError::PrivateAccessError(int x){
    a = x; //3
    b = x; //4
}

void PrivateAccessError::f(){
    a = 5; //5
    b = 5; //6
}

void PrivateAccessError::g(){
    a = 6; //7
    b = 6; //8
}

int main(){
    // PrivateAccessError objA;        //9
    PrivateAccessError objB(100);   //10
    // objB.a = 10;                    //11
    objB.b = 20;                    //12
    // objB.f();                       //13
    // objB.a();                       //14 a는 private 멤버
}



//3-10
#include <iostream>
using namespace std;

struct StructCircle{
    private:
    int radius;

    public:
    StructCircle(int r){radius = r;}
    double getArea();
};

double StructCircle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    StructCircle waffle(3);
    cout << "면적은 " << waffle.getArea();
}



//3-11
#ifndef ADDER_H
#define ADDER_H

class Adder{
    int op1, op2;
    public:
    Adder(int a, int b);
    int process();
};

#endif

#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator{
    public:
    void run();
};

#endif

#include "Adder.h"

Adder::Adder(int a, int b){
    op1 = a; op2 = b;
}

int Adder::process(){
    return op1 + op2;

}

#include <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run(){
    cout << "두 개의 수를 입력하세요>>";
    int a, b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.process();

}

#include "Calculator.h"

int main(){
    Calculator calc;
    calc.run();
}
//원래는 각각 따로 저장해서 실행해야함
*/