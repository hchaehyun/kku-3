// 11-1 ~ 11-4
#include <iostream>
using namespace std;
/*
// 11-1
int main() {
	cout.put('H');
	cout.put('i');
	cout.put(33); 
	cout.put('\n');
	

	cout.put('C').put('+').put('+').put(' ');

	char str[]="I love programming";
	cout.write(str, 6); 
}



// 11-2
void get1(){
    cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다>>";
    int ch;
    while((ch = cin.get()) != EOF){
        cout.put(ch);
        if(ch == '\n')
        break;

    }
}

void get2() {
	cout << "cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다>>";
	char ch;
	while(true) { 
		cin.get(ch); 
		if(cin.eof()) break; 
		cout.put(ch); 
		if(ch == '\n')  
		break; 
	}
}

int main(){
    get1();
    get2();
}


// 11-3
#include <cstring>

int main() {
	char cmd[80];
	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
	while(true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		cin.get(cmd, 80);
		if(strcmp(cmd, "exit") == 0) {
			cout << "프로그램을 종료합니다...."; 
			return 0;
		}
		else
			cin.ignore(1);
	}
}


// 11-4
int main() {
	char line[80];
	cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
	cout << "exit를 입력하면 루프가 끝납니다." << endl;

	int no = 1;
	while(true) {
		cout << "라인 " << no << " >> ";
		cin.getline(line, 80); 
		if(strcmp(line, "exit") == 0)
			break;
		cout << "echo --> ";;		
		cout << line << endl;
		no++; 
	}
}


// 11-5
#include <iostream>
using namespace std;

int main(){
    cout << 30 << endl;

    cout.unsetf(ios::dec);
    cout.setf(ios::hex);
    cout << 30 << endl;


    cout.setf(ios::showbase);
    cout << 30 << endl;

    cout.setf(ios::uppercase);
    cout << 30 << endl;

    cout.setf(ios::dec | ios::showpoint);

    cout << 23.5 << endl;

    cout.setf(ios::scientific);
    cout << 23.5 << endl;

    cout.setf(ios::showpos);
    cout << 23.5 << endl;
}


// 11-6
void showWidth() {
	cout.width(10);
	cout << "Hello" << endl;
	cout.width(5);
	cout << 12 << endl;

	cout << '%';
	cout.width(10); 
	cout << "Korea/" << "Seoul/" << "City" <<endl;
}

int main() {
	showWidth(); 
	cout << endl;

	cout.fill('^'); 	
	showWidth();
	cout << endl;

	cout.precision(5); 
	cout << 11./3. << endl;
}


// 11-7
int main() {
	cout << hex << showbase << 30 << endl;
	cout << dec << showpos << 100 << endl;
	cout << true << ' ' << false << endl;
	cout << boolalpha << true << ' ' << false << endl;
}


// 11-8
#include <iomanip>

int main() {
	cout << showbase;
	
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;

	for(int i=0; i<50; i+=5) { 
		cout << setw(8) << setfill('.') << dec << i; 
		cout << setw(10) << setfill(' ') << oct << i; 
		cout << setw(10) << setfill(' ') << hex << i << endl; 
	}
}


// 11-9
class Point {
	int x, y;
public:	
	Point(int x=0, int y=0) {
		this->x = x; 
		this->y = y;
	}
	friend ostream& operator << (ostream& stream, Point a); 
};


ostream& operator << (ostream& stream, Point a) {
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}

int main() {
	Point p(3,4); 
	cout << p << endl; 

	Point q(1,100), r(2,200); 
	cout << q << r < endl;
}
*/

// 11-10
#include <string>
using namespace std;

class Book{
	string title;
	string press;
	string author;
	public:
	Book(String title="", string press="", string author=""){
		this->title = title;
		this->press = press;
		this->author = author;


	}
	friend ostream& opera
}








