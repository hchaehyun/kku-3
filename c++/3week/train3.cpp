/*
// 1. 다음과 같은 main() 의 실행결과가 다음과 같도록 Tower 클래스를 작성하시오.
#include<iostream>
using namespace std;
 
class Tower{    

public:
    int height;
    Tower();
    Tower(int h);
    int getHeight();

}; 
 
Tower::Tower(){

    height = 1;
}
 
Tower::Tower(int h){

    height = h;
}
 
int Tower::getHeight(){ 

    return height;
}
 
int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}

*/

// 2. 은행에서 사용하는 프로그램을 작성하기 위해 은행계좌 하나를 표현하는 클래스 Account 가 필요하다. 
//    다음과 같은 main() 의 실행결과가 다음과 같도록  Account 클래스를 작성하시오. 


#include <iostream>
using namespace std;

class Account{

    public:
    string name;
    int id, money;

    Account();
    Account(string n, int i, int m);
    void deposit(int i);
    string getOwner();
    int withdraw(int i);
    int inquiry();

};
Account::Account(){

    name = " ";
    id = 0;
    money = 0;

}

Account::Account(string n, int i, int m){

    name = n;
    id = i;
    money = m;

}

void Account::deposit(int i){

    money += i;

}

string Account::getOwner(){

    return name;

}

int Account::withdraw(int i){

    money -= i;
    return i;

}

int Account::inquiry(){

    return money;
}
 
int main() {
    Account a("Kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}