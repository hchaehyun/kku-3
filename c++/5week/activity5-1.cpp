#include <iostream>
using namespace std;

/*
// 5-1
class Circle{
    private:
    int radius;
    public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea() {return 3.14*radius*radius;}
    int getRadius() {return radius;}
    void setRadius(int radius) {this -> radius = radius;}
};

Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r + 1);
}

int main(){
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius() << endl;
}


// 5-2
class Circle {
	int radius;
public:
	Circle() {radius = 1;}
	Circle(int radius) {this->radius = radius;}
	void setRadius(int radius) {this -> radius = radius;}
	double getArea() {return 3.14*radius*radius;}
};

Circle getCircle(){
	Circle tmp(30);
	return tmp; // 객체 tmp 리턴
}

int main(){
	Circle c; // 객체 생성, radius=1로 초기화
	cout << c.getArea() << endl;

	c = getCircle(); 
	cout << c.getArea() << endl;
}



// 5-3
int main(){
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int &refn = n;
	n = 4; 
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i;
	refn++;
	cout << i << '\t' << n << '\t' << refn << endl;
	
	int *p = &refn;
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << endl;
}



// 5-4
class Circle{
	int radius;
public:
	Circle() {radius = 1;}
	Circle(int radius) {this->radius = radius;}
	void setRadius(int radius) {this->radius = radius;}
	double getArea() {return 3.14*radius*radius;}
};

int main(){
	Circle circle;
	Circle &refc = circle; 
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();
}



// 5-5
bool average(int a[], int size, int& avg){
    if(size <= 0)
        return false;
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += a[i];
    avg = sum/size;
    return true;
}

int main(){
    int x[] = {0, 1, 2, 3, 4, 5};
    int avg;
    if(average(x, 6, avg))
        cout << "평균은 " << avg << endl;
    else
        cout << "매개 변수 오류" << endl;

    if(average(x, -2, avg))
        cout << "평균은 " << avg << endl;
    else
        cout << "매개 변수 오류" << endl;

}


// 5-6
class Circle{
    private:
	int radius; 
    public:
	Circle(); 
	Circle(int r);
	~Circle();
	double getArea()  {return 3.14*radius*radius;}
	int getRadius() {return radius;}
	void setRadius(int radius) {this->radius = radius;} 
}; 

Circle::Circle(){
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius){
	this->radius = radius;
	cout << "생성자 실행 radius = "  << radius << endl;
}

Circle::~Circle(){
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increaseCircle(Circle &c){
	int r = c.getRadius();
	c.setRadius(r+1);
}

int main(){
	Circle waffle(30);
	increaseCircle(waffle);
	cout << waffle.getRadius() << endl;
}



// 5-7
class Circle{
	int radius;
    public:
	Circle() {radius = 1;}
	Circle(int radius) {this->radius = radius;}
	void setRadius(int radius) {this->radius = radius;}
	double getArea() {return 3.14*radius*radius;}
};

void readRadius(Circle &c){
	int r;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> r;
	c.setRadius(r);
}

int main(){
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " <<donut.getArea() << endl;
}


// 5-8
char& find(char s[], int index){
	return s[index];
}

int main(){
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S';
	cout << name << endl;

	char& ref = find(name, 2); 
	ref = 't';
	cout << name << endl;
}


// 5-9
class Circle{
private:
	int radius; 
public:
	Circle(const Circle& c);
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
}; 

Circle::Circle(const Circle& c){
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main(){
	Circle src(30);
	Circle dest(src);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}


// 5-10
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
class Person{
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name){
	this->id = id;
	int len = strlen(name);
	this->name = new char [len+1];
	strcpy(this->name, name);
}

Person::~Person(){
	if(name)
		delete [] name;
}

void Person::changeName(const char* name){
	if(strlen(name) > strlen(this->name))
		return; 
	strcpy(this->name, name);
}
int main(){
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();	
	daughter.show();

	daughter.changeName("Grace"); 
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();	
	daughter.show();

	return 0;
}


// 5-11
#include <cstring>

class Person{ 
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& person); 
	~Person(); 
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name){
	this->id = id;
	int len = strlen(name); 
	this->name = new char [len+1]; 
	strcpy(this->name, name); 
}

Person::Person(const Person& person){ 
	this->id = person.id; 
	int len = strlen(person.name);
	this->name = new char [len+1]; 
	strcpy(this->name, person.name); 
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person(){
	if(name) 
		delete [] name;
}

void Person::changeName(const char* name){ 
	if(strlen(name) > strlen(this->name))
		return; 
	strcpy(this->name, name);
}

int main(){
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();
	daughter.show();

	return 0;
}
*/


// 5-12
void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

int main() {
	Person father(1, "Kitae");
	Person son = father;		
	f(father);								
	g();										
}






