#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
// 10번

class Nation{
    string nation;
    string capital;

public:
    
    Nation(string nation="", string capital=""){ this->nation = nation; this->capital=capital; }
    void set_nation(string nation, string capital){ this->nation=nation; this->capital=capital; }
    string get_nation() { return nation; } 
    string get_capital() { return capital; } 
};

int main(){
    vector<Nation> v;
    Nation n; 

    bool boolean;
    int num=0; 
    string temp;
    string nat;
    string cap;
    Nation nation[7]={
        Nation("대한민국", "서울"), Nation("대만", "타이페이"), Nation("일본", "도쿄"), Nation("프랑스", "파리"),
        Nation("이탈리아", "로마"), Nation("이집트", "카이로"), Nation("캐나다", "오타와"), Nation("몽골", "울란바토르"),
        Nation("라오스", "비엔티안"), Nation("스리랑카", "스리자야와르"), Nation("아르메니아", "예레반"), Nation("미얀마", "양곤");
        
    };

    for(int i = 0; i < 7; i++) { v.push_back(nation[i]); }

    cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****\n";
    while(1){
        cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
        cin >> num; 
        if(num==1){ 
            cout << "현재" << v.size() << "개의 나라가 입력되어 있습니다.\n";
            cout << "나라와 수도를 입력하세요(no no면 입력끝)\n";
            while(true){   
                cout << v.size() + 1 << ">>";   
                cin >> temp;  
                if(temp=="no no") {
                    break; 
                    }   
                boolean = true;   
                for(auto it = v.begin(); it !=v.end();it++){
                    if(it -> get_nation() == nat || it -> get_capital() == cap){    
                        cout << "already exists !!" << endl;
                        boolean = false;   
                        break;
                    }
                }
                if(boolean = true){    
                    n.set_nation(nat, cap);
                    v.push_back(n);
                }
            }
        }
        else if (num == 2){   
            for(auto it = v.begin(); it != v.end(); it++){
                cout << it -> get_nation() << "의 수도는? ";
                cin >> cap;
                if(cap == "exit") { break; } 
                if(it -> get_capital() == cap) {
                    cout<< "Correct !!" << endl;
                    } 
                else cout << "NO !!" << endl;
            }
        }
        else if (num==3) break; 
    }

}
*/
// 11. 책의 년도, 책이름, 저자 이름을 담은 Book 클래스를 만들고...


class Book{
    int year;      
    string title;   
    string name;  
public:
    Book (int year, string title, string name) { this->year=year; this->title=title; this->name=name;} 
    int get_year() {return year; }
    string get_title() { return title; }
    string get_name() { return name; } 
};

int main(){
    vector<Book> v;
    string title, name;
    int year;
    
    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다.\n";
    while(1){
        cout << "년도>>";
        cin >> year;
        cin.ignore();  
        if(year == -1){ break; }
        cout << "책이름>>";
        getline(cin,title);
        cout << "저자>>";
        getline(cin,name);
        Book book(year, title, name);
        v.push_back(book);  
    }
    cout << "총 입고된 책은" << v.size() << endl;
    cout << "검색하고자 하는 저자 이름을 입력하세요>>";
    getline(cin,name);
    for(auto it = v.begin(); ; it++){
        if(it->get_name() == name){
            cout << it->get_year() <<"년도, "<< it->get_title()<< ", "<< it->get_name()<<endl;
            break;
        }
    }
    cout << "검색하고자 하는 년도를 입력하세요>>";
    cin >> year;
    for(auto it = v.begin(); ; it++){
        if(it->get_year() == year){
            cout << it->get_year() <<"년도, "<< it->get_title()<< ", "<< it->get_name()<<endl;
            break;
        }
    }
}
