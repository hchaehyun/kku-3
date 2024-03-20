#include<iostream>
#include <vector>
#include<string>
#include<map>
using namespace std;

/*
//10-1
class Circle{
   int radius;
    public:
	Circle(int radius=1) { this->radius = radius; }
	int getRadius() { return radius; }
 
};

template <class T> 
void myswap(T & a, T & b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a=4, b=5;
	myswap(a, b);
	cout << "a=" << a << ", " << "b=" << b << endl;

	double c=0.3, d=12.5;
	myswap(c, d);
	cout << "c=" << c << ", " << "d=" << d << endl;

	Circle donut(5), pizza(20);
	myswap(donut, pizza);
	cout << "donut반지름=" << donut.getRadius() << ", ";
	cout << "pizza반지름=" << pizza.getRadius()<< endl;
}


//10-2
template <class T>
T bigger(T a, T b) {
	if(a > b)
		return a; 
	else
		return b;
}

int main() {
	int a=20, b=50;
	char c='a', d='z';
	cout << "bigger(20, 50)의 결과는 " << bigger(a, b) << endl;
	cout << "bigger('a', 'z')의 결과는 " << bigger(c, d) << endl;
}


//10-3
template <class T>
T add(T data [], int n) {
	T sum = 0;
	for(int i=0;  i<n; i++) {
		sum += data[i];
	}
	return sum;
}

int main() {
	int x[] = {1,2,3,4,5};
	double d[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7};

	cout << "sum of x[] = " << add(x, 5) << endl; 
	cout << "sum of d[] = " << add(d, 6) << endl;
}


//10-4
template <class T1, class T2> 
void mcopy(T1 src [], T2 dest [], int n) { 
	for(int i=0; i<n; i++) 
		dest[i] = (T2)src[i]; 
}

int main() {
	int x[] = {1,2,3,4,5};
	double d[5];
	char c[5] = {'H', 'e', 'l', 'l', 'o'}, e[5];

	mcopy(x, d, 5);
	mcopy(c, e, 5);
	for(int i=0; i<5; i++) cout << d[i] << ' ';
	cout << endl;
	for(int i=0; i<5; i++) cout << e[i] << ' ';
	cout << endl;	
}


//10-5
template <class T> 
void print(T array [], int n) {
	for(int i=0; i<n; i++) 
		cout << array[i] << '\t';
	cout << endl;
}

void print(char array [], int n) { 
	for(int i=0; i<n; i++) 
		cout << (int)array[i] << '\t'; 
	cout << endl;
}

int main() {
	int x[] = {1,2,3,4,5};
	double d[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	print(x, 5); 
	print(d, 5);

	char c[5] = {1,2,3,4,5};
	print(c, 5);
}


//10-6
template<class T>
class MyStack{
    int tos;
    T data[100];
    public:
    MyStack();
    void push(T element);
    T pop();
};

template<class T>
MyStack<T>::MyStack(){
    tos = -1;

}

template<class T>
void MyStack<T>::push(T element){
    if(tos == 99){
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}
template<class T>
T MyStack<T>::pop(){
    T retData;
    if (tos == -1){
        cout << "stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

int main() {
	MyStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char> *p = new MyStack<char>();
	p->push('a');
	cout << p->pop() << endl;
	delete p;
}


//10-7
template<class T>
class MyStack{
    int tos;
    T data[100];
    public:
    MyStack();
    void push(T element);
    T pop();
};

template<class T>
MyStack<T>::MyStack(){
    tos = -1;

}

template<class T>
void MyStack<T>::push(T element){
    if(tos == 99){
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}
template<class T>
T MyStack<T>::pop(){
    T retData;
    if (tos == -1){
        cout << "stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

class Point{
    int x, y;
    public:
    Point(int x = 0, int y = 0){this->x = x, this->y = y;}
    void show(){cout << '(' << x << ',' << y << ')' << endl;}
};

int main(){
    MyStack<int *> ipStack; 
	int *p = new int [3];
	for(int i=0; i<3; i++) p[i] = i*10;
	ipStack.push(p); 
	int *q = ipStack.pop(); 
	for(int i=0; i<3; i++) cout << q[i] << ' '; 
	cout << endl;
	delete [] p;

    MyStack<Point> pointStack;
    Point a(2,3), b;
    pointStack.push(a);
    b = pointStack.pop();
    b.show();

    MyStack<Point*> pStack; 
	pStack.push(new Point(10,20)); 
	Point* pPoint = pStack.pop(); 
	pPoint->show(); 

	MyStack<string> stringStack; 
	string s="c++";
	stringStack.push(s);
	stringStack.push("java");
	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;


}


//10-8
template <class T1, class T2> 
class GClass {
	T1 data1;
	T2 data2;
public:
	GClass();
	void set(T1 a, T2 b);
	void get(T1 &a, T2 &b);
};

template <class T1, class T2>
GClass<T1, T2>::GClass() { 
	data1 = 0; data2 = 0;
}

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
	data1 = a; data2 = b;
}

template <class T1, class T2> 
void GClass<T1, T2>::get(T1 & a, T2 & b) {
	a = data1; b = data2;
}

int main() {
	int a;
	double b;
	GClass<int, double> x;
	x.set(2, 0.5);
	x.get(a, b);
	cout << "a=" << a << '\t' << "b=" << b << endl;

	char c;
	float d;
	GClass<char, float> y;
	y.set('m', 12.5);
	y.get(c, d);
	cout << "c=" << c << '\t' << "d=" << d << endl;
}


//10-9
int main(){
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for(int i=0; i<v.size(); i++)
	cout << v[i]<<" ";
	cout<<endl;

	v[0]=10;
	int n= v[2];
	v.at(2)=5;

	for(int i = 0; i<v.size(); i++)
	cout<<v[i]<<" ";
	cout<<endl;
}


//10-10
int main() {
	vector<string> sv;
	string name;

	cout << "이름을 5개 입력하라" << endl;
	for(int i=0; i<5; i++) {
		cout << i+1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0); 
	for(int i=1; i<sv.size(); i++) {
		if(name < sv[i])
			name = sv[i];
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;
}




//10-11

int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it;

	for(it=v.begin(); it != v.end(); it++){
		int n = *it
		n = n*2
		*it = n;
	}

	for(it=v.begin(); it != v.end(); it++)
	cout<<*it<<' ';
	cout<<endl;
}
*/

int main() {
	map<string, string> dic;

	// 단어 3개를 map에 저장
	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과")); 
	dic["cherry"] = "체리"; 

	cout << "저장된 단어 개수 " << dic.size() << endl;
	
	string eng;
	while (true) {
		cout << "찾고 싶은 단어>> ";
		getline(cin, eng); 
		if (eng == "exit")
			break;  

		if(dic.find(eng) == dic.end()) 
			cout << "없음" << endl;
		else  
			cout << dic[eng] << endl; 
	}
	cout << "종료합니다..." << endl;
}

template <class T>
T max(T &x, T &y){
	if(x > y) return x;
	else return y;

}






