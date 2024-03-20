/*
// 12-1
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	
	cout << "이름>>";
	cin >> name; 
	cout << "학번>>";
	cin >> sid; 
	cout << "학과>>";
	cin >> dept; 

    	ofstream fout("c:\\temp\\student.txt"); 
	if(!fout) { 
		cout << "c:\\temp\\student.txt 파일을 열 수 없다";
		return 0;
	}


	fout << name << endl; 
	fout << sid << endl; 
	fout << dept << endl; 

	fout.close(); 
}


// 12-2
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream fin;  
	fin.open("c:\\temp\\student.txt"); 
	if(!fin) {  
		cout << "파일을 열 수 없다";
		return 0;
	}
	
	char name[10], dept[20];
	int sid;


	fin >> name; 
	fin >> sid; 
	fin >> dept;
	
	
	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;

	fin.close(); 
}


// 12-3
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";
	
	ifstream fin(file);

	if(!fin) {
		cout << file << " 열기 오류" << endl;
		return 0;
	}
	int count = 0;
	int c;
	while((c=fin.get()) != EOF) { 
        cout << (char)c;
		count++;
	}
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close();
}


// 12-4
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* firstFile = "c:\\temp\\student.txt";
	const char* secondFile = "c:\\windows\\system.ini";

	fstream fout(firstFile, ios::out | ios::app);
	if(!fout) { 
		cout << firstFile << " 열기 오류";
		return 0;
	}

	fstream fin(secondFile, ios::in); 
	if(!fin) { 
		cout << secondFile << " 열기 오류";
		return 0;
	}

	int c;
	while((c=fin.get()) != EOF) { 
		fout.put(c); 
	}

	fin.close(); 
	fout.close(); 
}


// 12-5
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("c:\\windows\\system.ini");
	if(!fin) {
		cout << "c:\\windows\\system.ini 열기 실패" << endl;
		return 0;
	}

	char buf[81]; 
	while(fin.getline(buf, 81)) {
		cout << buf << endl; 
	}

	fin.close();

}


// 12-6
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void fileRead(vector<string> &v, ifstream &fin) { 
	string line;
	while(getline(fin, line)) { 	
		v.push_back(line); 			
	}
}

void search(vector<string> &v, string word) { 
	for(int i=0; i<v.size(); i++) {
		int index = v[i].find(word);
		if(index != -1) 
			cout << v[i] << endl;
	}
}

int main() {
	vector<string> wordVector;
	ifstream fin("words.txt");
	if(!fin) {
		cout << "words.txt 파일을 열 수 없습니다" << endl;
		return 0; 
	}
	fileRead(wordVector, fin); 
	fin.close();

	cout << "words.txt 파일을 읽었습니다." << endl;
	while(true){
        cout << "검색할 단어를 입력하세요 >>";
        string word;
        getline(cin, word);
        if(word == "exit")
            break;
        search(wordVector, word);
    }
    cout << "프로그램을 종료합니다." << endl;
}
*/

// 12-7
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const char* srcFile = "/Users/demian/Downloads/turtlerock.jpg";
    const char* destFile = "/Users/demian/Downloads/copyturtlerock.jpg";

    ifstream fsrc(srcFile, ios::in | ios::binary);
    cout << srcFile << "열기 오류" << endl;
    return 0;
}

ofstream fdest(destFilem ios::out | ios::binary);
if(!dest){
    cout << destFile << " 열기 오류" << endl;
	return 0;

}

int c;
	while((c=fsrc.get()) != EOF) { // 소스 파일을 끝까지 한 바이트씩 읽는다.
		fdest.put(c); // 읽은 바이트를 파일에 출력한다.
	}
	cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
	fsrc.close();
	fdest.close();
}







