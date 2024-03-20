// 202023615 함채현 C++프로그래밍(8758) 6주차
// 예제 6-1 ~ 6-4

/*
// 6-1
#include <iostream>
using namespace std;

int big(int a, int b) { // a와 b 중 큰 수 리턴
	if(a>b) return a;
	else return b;
}

int big(int a[], int size) { // 배열 a[]에서 가장 큰 수 리턴
	int res = a[0];
	for(int i=1; i<size; i++)
		if(res < a[i]) res = a[i];
	return res;
}

int main() {
	int array[5] = {1, 9, -2, 8, 6};
	cout << big(2,3) << endl;
	cout << big(array, 5) << endl;
}


// 6-2
#include <iostream>
using namespace std;

int sum(int a, int b) { // a에서 b까지 합하기
	int s = 0;
	for(int i=a; i<=b; i++) 
		s += i;
	return s;
}
int sum(int a) { // 0에서 a까지 합하기
	int s = 0;
	for(int i=0; i<=a; i++) 
		s += i;
	return s;
}
int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}


// 6-3
#include <iostream>
#include <string>
using namespace std;

// 원형 선언
void star(int a=5);
void msg(int id, string text="");

// 함수 구현
void star(int a) {
	for(int i=0; i<a; i++)
		cout << '*';
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	// star() 호출
	star();
	star(10);

	// msg() 호출
	msg(10);
	msg(10, "Hello");
}


// 6-4

#include <iostream>
using namespace std;

// 원형 선언
void f(char c=' ', int line=1);

// 함수 구현
void f(char c, int line) {
	for(int i=0; i<line; i++) {
		for(int j=0; j<10; j++)
			cout << c;
		cout << endl;
	}
}

int main() {
	f(); // 한줄에 빈칸을 10개 출력한다.
	f('%'); // 한 줄에 '%'를 10개 출력한다.
	f('@', 5); // 5 줄에 '@' 문자를 10개 출력한다.
}
*/
