/*
//1. 다음 C프로그램을 C++프로그램으로 바꾸어 실행시켜 보시오
#include <iostream>
using namespace std;

int main(){
    int k, n = 0;
    int sum = 0;

    cout << "끝수를 입력하시오.>>";
    cin >> n;

    for(k = 1; k <= n; k++){
        sum += k;
    }

    cout << "1에서 " << n << " 까지의 합은 " << sum <<"입니다. \n";

}

//2. "yes"가 입력될 떄까지 종료하지 않는 프로그램을 작성하시오
#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    
    while(true){ //yes를 받을 때 까지 계속
    cout << "종료하고 싶다면 yes 를 입력하세요";
    getline(cin, input);
    if(input == "yes"){
        cout << "종료합니다\n" << endl;
        break;
    }
    else{
        cout << "계속합니다.";
    }
        
    }
}




//3-1
#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    double getArea();
};

double Circle::getArea(){
    return 3.14*radius*radius;

}

int main(){
    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}


//3-2
#include <iostream>
using namespace std;

class Rectangle{
    public:
        int width;
        int height;
        int getArea();

    };

int Rectangle::getArea(){
    return width*height;
}

int main(){
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << endl;
}


//3-3

#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    Circle();
    Circle(int r);
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

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;
}



//3-4
#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() : Circle(1){}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}



//3-5
#include <iostream>
using namespace std;

class Point{
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() {cout << "(" << x << ", " << y << ")" << endl;}
};

Point::Point() : Point(0,0){}
Point::Point(int a, int b)
	: x(a), y(b) { }

int main(){
	Point origin;
	Point target(10,20);
	origin.show();
	target.show();
}

*/

//3-6
#include <iostream> 
using namespace std; 

class Rectangle{ 
public:
	int width, height; 

	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle(){
	width = height = 1;
}

Rectangle::Rectangle(int w, int h){
	width = w; height = h;
}

Rectangle::Rectangle(int length){
	width = height = length;
}

bool Rectangle::isSquare(){ 
	if(width == height) return true;
	else return false;
}

int main() {
	Rectangle rect1; 
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if(rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
