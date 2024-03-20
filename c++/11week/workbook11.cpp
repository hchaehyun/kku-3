#include <iostream>
using namespace std;

/*
template <class T>
T max(T &x, T &y){
	if(x > y) return x;
	else return y;

}

int main(){
	int i = max(5, 6);
	double f = max(6.78, 3.52);
	double g = max(6, 3.52);

	
}

template <typename T>

void printArray(T data[], int size){
	for(int i=0; i <size; i++){
		cout << data[i] << " "
	}
	
	cout << " ]" << endl;
}



void printArray(int data[], int size){
	cout << "[ ";
	for (int i = 0; i <size; i++){
		cout << data[i] << " , ";
	}
	cout << " ]" << endl;
}

//매개변수 정의 변경하여 어떤 타입의 배열도 받을 수 있는 템플릿함수로 변환




#include <iostream>
#include <queue> queue <int> q;
#define MAXSIZE 10

using namespace std;

int main(void){

	queue<int> queue;

	queue.push(34);
	queue.push(26);
	queue.push(68);
	queue.push(20);
	queue.push(24);
	queue.push(23);

	queue.pop();
	queue.pop();

	return 0;

}

*/

// Movie 클래스 저장하는 벡터 생성하고 영화정보 벡터에 저장. 
// 반복자 선언하여 Movie Vector 순회하고 정보출력
// titanic 9.9  gone with the wind 9.8  공조 9.7  범죄도시 9.5

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie{
	private:
		string title;
		double rating;
	public:
		Movie(string t = " ", double r = 0.0){
			title = t;
			rating = r;
		}
		void print_movie(){
			cout << title << " : " << rating << endl;
		}

};

int main(){
	vector<string> vtitle; // title vector
	vector<double> vrating; // rating vector

	vtitle.push_back("titanic");
	vtitle.push_back("gone with the wind");
	vtitle.push_back("공조");
	vtitle.push_back("범죄도시");

	vrating.push_back(9.9);
	vrating.push_back(9.8);
	vrating.push_back(9.7);
	vrating.push_back(9.5);

	vector<string>::iterator ittitle_begin = vtitle.begin();
	vector<string>::iterator ittitle_end = vtitle.end();

	vector<double>::iterator itrating_begin = vrating.begin();
	vector<double>::iterator itrating_end = vrating.end();

	for(vtitle = ittitle.begin(); vtitle != ittitle.end(); vtitle++){
		cout << *vtitle << " ";
	}

	for(vtitle = itrating.begin(); vrating != itrating.end(); vrating++){
		cout << *vrating << " ";
	}



}

