#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    int balance;
    double rate;
public:
    BankAccount();  // 위임
    BankAccount(int balance, double rate) // 타겟
    {
        this->balance = balance;
        this->rate = rate;
    }
    void deposit(int balance);
    void transfer(BankAccount Ac, int balance);
    void withdraw(int balance);
    void print();
};

BankAccount::BankAccount() : BankAccount(0, 5) {}
void BankAccount::deposit(int balance){
    this->balance += balance;
}
void BankAccount::transfer(BankAccount Ac, int balance){
    Ac.balance = balance;
    withdraw(balance);
}
void BankAccount::withdraw(int balance){
    this->balance -= balance;
}
void BankAccount::print() {
    cout << "예금액:" << balance << endl;
    cout << "이율:" << rate << "%" << endl;
}

int main() {
	BankAccount  ba1;
	BankAccount  ba2(100000, 0.03);
	ba1.deposit(200000);
	ba2.deposit(50000);
	ba1.print();
	ba2.print();
	ba1.transfer(ba2, 3000);
	ba2.transfer(ba1, 2000);
	ba1.print();
	ba2.print();
	ba1.withdraw(9000);
	ba2.withdraw(1000);
	ba1.print();
	ba2.print();
	return 0;
} 