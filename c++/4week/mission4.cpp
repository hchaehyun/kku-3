// 212p 6번, 11번, 12번, 슬라이드 40번 activity

//202023615 함채현 C++프로그래밍(8758) 4주차 과제

/*
// 6. string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 문자열로 입력받고 거꾸로 출력하는 프로그램을 작성하라

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다)";

    while(true){
        cout << ">>";
        getline(cin, str);
        int len = str.length();

        if(str == "exit")
            break;
        for(int i = len - 1; i >= 0; i--){// str이 \0일때까지 순차적으로 읽고, 뒤집는다
                cout << str[i];
                

        } 
        cout << endl;
    }

}



// 11. 다음은 커피자판기로 작동하는 프로그램을 만들기 위해 필요한 두 클래스이다....

#include<iostream>
using namespace std;

class Container{
    int size;               // 현재 저장량, 최대 10
    public:
    Container(){size = 10;}
    void fill();            // 최대(10)으로 채우기 ok
    void consume();         // 1 소모 ok
    int getSize();          // 현재 크기 리턴 ok
};

class CoffeeVendingMachine{ //커피자판기 표현 클래스
    Container tong[3];      // tong0은 커피, 1은 물, 2는 설탕통
    void fill();            // 3개 통 모두 10으로 채움
    void selectEspresso();  // 에스프레소 -> 커피1 물1 소모
    void selectAmericano(); // 아메리카노 -> 커피1 물2
    void selectSugarCoffee(); // 설탕커피 -> 커피1 물2 설탕1
    void show();            // 현재 커피 물 설탕 잔량출력
    public:
    void run();             //작동
};



int start = 0;

void Container::fill(){
    size = 10;
}

void Container::consume(){
    size--;
}

int Container::getSize(){
    return size;
}

void CoffeeVendingMachine::run(){
    int a;

    if(start == 0)
        cout << "===CoffeeVendingMachine Start===" << endl;
    start++;
    
    while(true){
        cout << "===Input Menu (1: Espresso / 2:Americano / 3: SugarCoffee / 4: Show / 5: Fill)===" << endl;
        cin >> a;

        switch (a){
        case 1:
            selectEspresso();
            break;
ß
        case 2:
            selectAmericano();
            break;
            
        case 3:
            selectSugarCoffee();
            break;
        
        case 4:
            show();
            break;
        
        case 5:
            fill();
            break;
        }
    }

}

void CoffeeVendingMachine::selectEspresso(){
    for(int i = 0; i < 3; i++){
        if(tong[i].getSize() == 0){
            cout << "원료가 부족합니다." << endl;
            run();
        }
    }

    tong[0].consume();
    tong[1].consume();
    cout << "에스프레소 완료" << endl;
}

void CoffeeVendingMachine::selectAmericano(){
    for(int i = 0; i < 3; i++){
        if(tong[i].getSize() == 0){
            cout << "원료가 부족합니다." << endl;
            run();
        }
    }

    tong[0].consume();
    tong[1].consume(); tong[1].consume();
    cout << "아메리카노 완료" << endl;
}

void CoffeeVendingMachine::selectSugarCoffee(){
    for(int i = 0; i < 3; i++){
        if(tong[i].getSize() == 0){
            cout << "원료가 부족합니다." << endl;
            run();
        }
    }

    tong[0].consume();
    tong[1].consume(); tong[1].consume();
    tong[2].consume();
    cout << "슈가커피 완료" << endl;
}

void CoffeeVendingMachine::show(){
    cout << "coffee " << tong[0].getSize() << endl;
    cout << "water " << tong[1].getSize() << endl;
    cout << "sugar " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::fill(){
    for(int i = 0; i < 3; i++){
        tong[0].fill();
        tong[1].fill();
        tong[2].fill();
    }
    show();

}

int main(){
    CoffeeVendingMachine *coffee = new CoffeeVendingMachine;
    coffee -> run();
    delete coffee;
}




// 12. 다음은 이름과 반지름을 속성으로 가진 Circle 클래스와 이들을 배열로....

#include <iostream>
using namespace std;

class Circle{
    int radius;
    string name;
    public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};



class CircleManager{
    Circle *p;
    int size;

    public:
    CircleManager(int size);
    ~CircleManager();
    void searchByName();
    void searchByArea();

};

void Circle::setCircle(string name, int radius){
    this->name = name;
    this->radius = radius;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

string Circle::getName(){
    return name;
}

CircleManager::CircleManager(int size){
    this -> size = size;
    this -> p = new Circle[size];
    string name;
    int radius;

    for(int i = 0; i < size; ++i){
        cout << "원의 이름과 반지름 : " << i + 1;
        cin >> name >> radius;
        p[i].setCircle(name, radius);

    }
}

CircleManager::~CircleManager(){
    delete[] p;
}

void CircleManger::searchByName() {
    cout << "검색하는 원의 이름은 : ";
    string name;
    cin >> name;
    for(int i = 0; i < this -> size; ++i){
        if(name.compare(p[i].getName()) == 0) {
            cout << name << "의 면적은 " << p[i].getArea() << endl;
            break;
        }
    }
}

void CircleManger::searchByArea() {
    cout << "최소 면적을 정수로 입력 >> ";
    int area;
    cin >> area;
    for (int i = 0; i < this -> size; ++i) {
        if (area < p[i].getArea()){
            cout << p[i].getName() << "의 면적은 " << p[i].getArea();
        }
    }
}

int main() {
    int num;
    cout << "원의 개수 >> ";
    cin >> num;
    CircleManger circle(num);
    circle.searchByName();
    circle.searchByArea();
}

*/


// 슬라이드 40번 activity

#include <iostream>
#include <string>
using namespace std;

int main(){

    string a("Hello C++");
    cout << a.length() << endl;
    // 9

    a.append("!!");
    cout << a << endl;
    // Hello C++!!

    cout << a.at(6) << endl;
    // C

    cout << a.find("C") << endl;
    // 6

    int n = a.find("++"); //++시작위치
    cout << n << endl;
    // 7

    int k = a.find("+++"); //+++은 없음 -1 return
    cout << k << endl;
    // -1

    a.erase(1, 3);
    cout << a << endl;
    // Ho C++!!

    a.insert(1, "ell");
    cout << a << endl;
    // Hello C++!!

    string s("I love C++");
    string b = s.substr(2, 4);
    cout << b<< endl;
    // love

    string c = s.substr(2);
    cout << c<< endl;
    // love C++

    s.insert(2, "really ");
    cout << s << endl;
    // I really love C++

    s.replace(2, 11,"study");
    cout << s << endl;
    // I study C++

    s.erase(0, 7);
    cout << s << endl;
    // C++

    s.clear();
    cout << s << endl;
    // 

    string x = "Hello";
    string y = "Hello";
    int result = x.compare(y);
    cout << result << endl;
    // 0

    string z = "Hello";
    string w = "Hell";
    int result2 = z.compare(w);
    cout << result2 << endl;
    // 1


}

