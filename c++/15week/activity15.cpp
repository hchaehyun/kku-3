/*
//13-1
#include <iostream>
using namespace std;

int getExp(int base, int exp) { // base의 exp 지수승을 계산하여 리턴
	int value=1;
	for(int n=0; n<exp; n++) 
		value = value * base; // base를 exp번 곱하여 지수 값 계산
	return value;
}

int main() {
	int v= getExp(2, 3); // 2의 3승 = 8
	cout << "2의 3승은 " << v << "입니다." << endl;

	int e = getExp(2, -3); // 2의 -3승은 ?
	cout << "2의 -3승은 " << e << "입니다." << endl;
}

//13-2
#include <iostream>
using namespace std;

int getExp(int base, int exp) { 
	if(base <= 0 || exp <= 0) {
		return -1; // 오류 리턴
	}
	int value=1;
	for(int n=0; n<exp; n++) 
		value = value * base; 
		return value; 
}

int main() {
	int v=0;
	v = getExp(2, 3); 
	if(v != -1)
		cout << "2의 3승은 " << v << "입니다." << endl;
	else 
		cout << "오류. 2의 3승은 " << "계산할 수 없습니다." << endl;

	int e=0;
	e = getExp(2, -3); // 2의 -3 승 ? getExp()는 false 리턴
	if(e != -1)
		cout << "2의 -3승은 " << e << "입니다." << endl;
	else
		cout << "오류. 2의 -3승은 " << "계산할 수 없습니다." << endl;
}

//13-3
#include <iostream>
using namespace std;

bool getExp(int base, int exp, int &ret) { // baseexp 값을 계산하여 ret에 저장
	if(base <= 0 || exp <= 0) {
		return false; 
	}
	int value=1;
	for(int n=0; n<exp; n++) 
		value = value * base;
	ret = value;
	return true;
}

int main() {
	int v=0;
	if(getExp(2, 3, v)) // v = 23 = 8. getExp()는 true 리턴
		cout << "2의 3승은 " << v << "입니다." << endl;
	else 
		cout << " 오류. 2의 3승은 " << "계산할 수 없습니다." << endl;

	int e=0;
	if(getExp(2, -3, e)) // 2-3 ? getExp()는 false 리턴
		cout << "2의 -3승은 " << e << "입니다." << endl;
	else
		cout << ＂오류. 2의 -3승은 " << "계산할 수 없습니다." << endl;
}


//13-4
#include <iostream>
using namespace std;

int main() {
	int n, sum, average;

	while(true) {
	cout << "합을 입력하세요>>";
		cin >> sum;
		cout << "인원수를 입력하세요>>";
		cin >> n;
		try {
			if(n <= 0) // 오류 탐지
			throw n; // 예외 발생. catch(int x) 블록으로 점프
		else
			average = sum / n;
		}
		catch(int x) {
			cout << "예외 발생!! " << x << "으로 나눌 수 없음" << endl;
			average = 0;
			cout << endl;
			continue;
		}
		cout << "평균 = " << average << endl << endl; // 평균 출력
	}
}


//13-5
#include <iostream>
using namespace std;

int getExp(int base, int exp) { 
	if(base <= 0 || exp <= 0) {
		throw "음수 사용 불가"; 
	}
	int value=1;
	for(int n=0; n<exp; n++) 
		value = value * base;
	return value; 
}

int main() {
	int v=0;
	try {
		v = getExp(2, 3); 
		cout << "2의 3승은 " << v << "입니다." << endl;

		v = getExp(2, -3);
		cout << "2의 -3승은 " << v << "입니다." << endl;
	}
	catch(const char *s) {
			cout << s << endl;
	}
}


//13-6
#include<iostream>
#include<cstring>
using namespace std;

int stringToInt(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for(int i=0; i<len; i++) {
		if(x[i] >= '0' && x[i] <= '9')
			sum = sum*10 + x[i]-'0';
		else 
			throw x; 
	}
	return sum;
}

int main() {
	int n;
	try {
		n = stringToInt("123");
		cout << "\"123\" 은 정수 " << n << "로 변환됨" << endl;
		n = stringToInt("1A3"); 
		cout << "\"1A3\" 은 정수 " << n << "로 변환됨" << endl;
	}
	catch(const char* s) {
		cout << s << "처리에서 예외 발생!!" << endl;
		return 0;
	}
}
*/






