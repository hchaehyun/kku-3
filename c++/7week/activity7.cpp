// 202023615 함채현 C++프로그래밍(8758) 7주차 실습
// 실습 7-1 ~ 7-5

/*
// 7-1
#include <iostream>
using namespace std;

class Rect; 
bool equals(Rect r, Rect s);

class Rect{
	int width, height;
public:
	Rect(int width, int height)  {this->width = width; this->height = height;}
	friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s){
	if(r.width == s.width && r.height == s.height) return true; 
	else return false;
}

int main(){
	Rect a(3, 4), b(4, 5);
	if(equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}


// 7-2
#include <iostream>
using namespace std;

class Rect; 

class RectManager{
public:
	bool equals(Rect r, Rect s);
};

class Rect{
	int width, height;
public:
	Rect(int width, int height) {this->width = width; this->height = height;}
	friend bool RectManager::equals(Rect r, Rect s); 
};

bool RectManager::equals(Rect r, Rect s){ 
	if(r.width == s.width && r.height == s.height) return true; 
	else return false;
}

int main(){
	Rect a(3, 4), b(3, 4);
	RectManager man;
	
	if(man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl; 
}


// 7-3
#include <iostream>
using namespace std;

class Rect; 

class RectManager{
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect{
	int width, height;
public:
	Rect(int width, int height)  { this->width = width; this->height = height; }
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s){
	if(r.width == s.width && r.height == s.height) return true; 
	else return false;
}

void RectManager::copy(Rect& dest, Rect& src){
	dest.width = src.width;  dest.height = src.height;
}

int main(){
	Rect a(3, 4), b(5, 6);
	RectManager man;
	
	man.copy(b, a);
	if(man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}


// 7-4
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0){
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator+ (Power op2);
};

void Power::show(){
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator+(Power op2){ 
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

int main(){
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
}

*/
// 7-5
#include <iostream>
using namespace std;

class Power{
	int kick;
	int punch;
public:
	Power(int kick=0, int punch=0){
		this->kick = kick; this->punch = punch;
	}
	void show();
	bool operator== (Power op2);
};

void Power::show(){
	cout << "kick=" << kick << ',' 
		<< "punch=" << punch << endl;
}

bool Power::operator==(Power op2){
	if(kick==op2.kick && punch==op2.punch) return true;
	else return false;
}
int main(){
	Power a(3, 5), b(3, 5);
	a.show();
	b.show();
	if(a == b) cout << "두 파워가 같다." << endl;
	else cout << "두 파워가 같지 않다." << endl;
}




