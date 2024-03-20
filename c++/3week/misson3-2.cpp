//202023615 함채현 8758 C++프로그래밍 3주차-2 과제
//5. 랜덤 수를 발생시키는 Random 클래스를 만들자

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
    public:
    Random();
    int next();
    int nextInRange(int a, int b);
};

Random::Random(){
    srand((unsigned)time(0)); 
    //난수의 값 바꾸고 싶으면 seed변경, 그 값으로 현재 시간 사용시 초당 seed값 계속 변화 => 실행할 때 마다 랜덤 난수
}

int Random::next(){
    return rand();
}

int Random::nextInRange(int a, int b){
    return rand() % (b - a + 1) + a; //범위가 지정된 난수 생성

}


int main() {
    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++) {
        int n = r.nextInRange(2,4);
        cout << n << ' ';
    }
    cout << endl;
}