// 202023615 함채현 C++프로그래밍(8758) 6주차 과제
// 실습문제 6장 4, 5, 7번

/*
// 4. 다음 클래스에 중복된 생성자를 디폴트 매개 변수를 가진 하나의 생성자로 작성하고 테스트 프로그램 작성.
#include <iostream>
using namespace std;

class MyVector{
    int *mem;
    int size;
public:
    MyVector(int n = 100, int val = 0);
    void test();
    ~MyVector() { delete [] mem; }
};
 
MyVector::MyVector(int n, int val) {
    mem = new int [n];
    size = n;
    for(int i=0; i<size; i++) mem[i] = val;
}

void MyVector::test(){
    cout << "size = " << size << endl;
    for(int i = 0; i < size; i++)
    cout << mem[i] << ' ';
    cout << endl;
}

int main(){
    MyVector a;
    MyVector b(10, 20);
    cout << "test" << endl << endl;

    a.test();
    cout << endl;
    b.test();
}



// 5. 동일한 크기로 배열을 변환하는 다음 2개의 static 멤버 함수를 가진 ArrayUtility 클래스 작성.
#include <iostream>
using namespace std;

class ArrayUtility{

    public:

    static void intToDouble(int source[], double dest[], int size); 
    // int[]을 double[]로 변환
    static void doubleToInt(double source[], int dest[], int size); 
    // double[]을 int[]로 변환
};

void ArrayUtility::intToDouble(int source[], double dest[], int size){
    for(int i = 0; i < size; i++) 
    dest[i] = (double)source[i];
}
 
void ArrayUtility::doubleToInt(double source[], int dest[], int size){
    for(int i = 0; i < size; i++)
    dest[i] = (int)source[i];
}


int main() {
    int x[] = {1, 2, 3, 4, 5};
    double y[5];
    double z[] = {9.9, 8.8, 7.7, 6.6, 5.6};
    
    ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]
    for(int i=0; i<5; i++) cout << y[i] << ' ';
    cout << endl;
    
    ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]
    for(int i=0; i<5; i++) cout << x[i] << ' ';
    cout << endl;
}


*/

// 7. 다음과 같은 static 멤버를 가진 Random 클래스를 완성하라...
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


class Random{
    public:
    static void seed() {srand((unsigned)time(0));} // 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
    static int nextInt(int min = 0, int max = 32767);
    static char nextAlphabet();
    static double nextDouble();
};

int Random::nextInt(int min, int max){
    int a = 0;
    while(true){
        a = rand() % (max + 1);
        if(min <= a) 
            break;
    }
    return a;
}

char Random::nextAlphabet(){
    char b = 0;
    while(true){
        b = rand() % 'z';
        if(b >= 'a' || ('A' <= b && b <= 'Z'))
        break;
    }
    return b;

}

double Random::nextDouble(){
    double c = 0;
    double max = 32767;
    c = rand() / max;

    return c;
    
}

int main(){
    Random::seed();
    cout << "랜덤정수 10개 출력 : ";
    for(int i = 0; i < 10; i++){
        cout << Random::nextInt(1, 100) << ", ";

    }
    cout << endl;

    cout << "랜덤알파벳 10개 출력 : ";
    for(int i = 0; i < 10; i++){
        cout << Random::nextAlphabet() << ", ";

    }
    cout << endl;

    cout << "랜덤실수 10개 출력 : ";
    for(int i = 0; i < 10; i++){
        cout << Random::nextDouble() << ", ";
    }
    cout << endl;
}
    



