
/*
// 7-14
#include <stdio.h>
#include <string.h>

int main(void){
    char s[3][5]; // char 타입 2차원 배열 선언, 최대길이 4인 문자열 3개 저장
    int i;

    strcpy(s[0], "ab"); // 문자 배열에 각 원소 복사해서 삽입
    strcpy(s[1], "cdef");
    strcpy(s[2], "ghi");

    s[2][0] = 'G'; // s[2] 문자배열의 첫번째 문자 위치에 G 대입
    for(i = 0; i < 3; i++)
        printf("%s 문자열의 길이 : %d\n", s[i], strlen(s[i]));
        // strlen 함수로 길이 구하기

    return 0;
}



// 8-1
#include <stdio.h>
int main(void){
    // 포인터 변수 선언
    char *pc;
    int *pi;
    double *pd;
    
    // 포인터 변수 크기 구하기
    printf("pc의 크기 : %d\n", sizeof(pc));
    printf("pi의 크기 : %d\n", sizeof(pi));
    printf("pd의 크기 : %d\n", sizeof(pd));

    // 포인터형의 크기 구하기
    printf("char* 의 크기 : %d\n", sizeof(char*));
    printf("short* 의 크기 : %d\n", sizeof(short*));
    printf("int* 의 크기 : %d\n", sizeof(int*));
    printf("float* 의 크기 : %d\n", sizeof(float*));
    printf("double* 의 크기 : %d\n", sizeof(double*));

    // 포인터 변수와 포인터형의 크기는 컴파일러의 bit설정에 따라 달라진다.
    // 32bit 설정으로 컴파일시 크기는 4바이트, 64bit 설정으로 컴파일시 크기는 8바이트이다.
    // 운영체제의 bit가 아닌 컴파일러의 bit

    return 0;
}




// 8-2
#include <stdio.h>
int main(void){
    int x; // int형 변수 x 선언
    int *p; // 포인터 변수 p 선언

    p = &x; // p에 x의 주소 저장, 즉 p->x
    *p = 10; // 포인터 p 에 10 대입

    printf("*p = %d\n", *p); // *p는 10
    printf("x = %d\n", x); // p가 x의 주소를 가지고 있으므로 x는 결국 *p, 10

    printf("p = %p\n", p); // p의 값은 *p가 가리키는 x의 주소값
    printf("&x = %p\n", &x); // x의 주소값

    printf("&p = %p\n", &p); // &p, 즉 p의 주소 그 자체

    return 0;

}


// 8-3
#include <stdio.h>

int main(void){
    char ch;
    char *pc = &ch; // char형 포인터 변수, *pc가 ch의 주소 가리킴

    int n;
    int *pi = &n; // int형 포인터 변수, *pi가 n의 주소 가리킴

    double d;
    double *pd = &d; // double형 포인터 변수, *pd가 d의 주소 가리킴

    int arr[3]; // size 3 int type array
    int i;

    for(i = 0; i < 3; i++)
        printf("*pc+%d = %p\n", i, pc+i); // *pc + 정수
        // pc + 0 = pc에 char 0개 더한 주소값
        // pc + 1 = pc에 char 1개(1byte) 더한 주소값...
        // for i < 3 반복문이므로 pc + 2 까지 계산되고 printf

    for(i = 0; i < 3; i++)
        printf("*pi+%d = %p\n", i, pi+i); // *pi + 정수
        // pi + 0 = pi에 int 0개 더한 주소값
        // pi + 1 = pi에 int 1개(4byte) 더한 주소값...
        // for i < 3 반복문이므로 pi + 2 까지 계산되고 printf

    for(i = 0; i < 3; i++)
        printf("*pd+%d = %p\n", i, pd+i); // *pd + 정수
        // pd + 0 = pd에 double 0개 더한 주소값
        // pd + 1 = pd에 double 1개(8byte) 더한 주소값...
        // for i < 3 반복문이므로 pd + 2 까지 계산되고 printf
    
    for(i = 0; i < 5; i++)
        printf("&arr[%d]-&arr[0] = %d\n", i, &arr[i]-&arr[0]); // 포인터의 차이 계산
        // arr[i]의 주소값에서 arr[0]이 int 사이즈로 얼마나 떨어져있는지 계산

    return 0;

}


// 8-4
#include <stdio.h>
int main(void){
    int arr[5] = {10, 20, 30, 40, 50}; // int type array
    int *p = &arr[0]; // int type pointer -> arr[0] 주소
    int i;

    for(i = 0; i < 5; i++, p++) // 포인터 변수 증감연산자
        printf("%d\n", *p);
        // *p는 arr[0]을 가리키는 상태, 10을 출력한다.
        // p++에 의해 i = 1, *p = arr[1] 가리키게 된다.
        // for문의 조건에 의해 i가 5가 될 때 까지 반복

    return 0;
}



// 8-5
#include <stdio.h>
int main(void){
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    // 배열 원소의 주소 구하는 방법 2가지
    for(i = 0; i < 5; i++){
        printf("&arr[%d] = %p, ", i, &arr[i]);
        printf("arr+%d = %p\n", i, arr+i);
    }

    // 배열 원소의 값 구하는 방법 2가지
    for(i = 0; i < 5; i++){
        printf("&arr[%d] = %d, ", i, arr[i]);
        printf("*(arr+%d) = %d\n", i, *(arr+i));

    }
    return 0;
}



// 8-6
#include <stdio.h>
int main(void){
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // 배열 시작주소로 포인터 초기화
    int i;

    // 배열 원소의 주소
    for(i = 0; i < 5; i++){
        printf("arr+%d = %p, ", i, arr+i); // 시작주소 + int 크기
        printf("p+%d = %p\n", i, p+1); // 시작주소 + int 크기
    }

    // 배열 원소의 값
    for(i = 0; i < 5; i++){
        printf("arr[%d] = %d, ", i, arr[i]); // 시작주소 + int 크기위치에 있는 원소
        printf("p[%d] = %d\n", i, p[i]); // 시작주소 + int 크기위치에 있는 원소
    }

    return 0;
}



// 10-1
#include <stdio.h>
void Swap(int x, int y); // Swap 함수 선언

int main(void){
    int a = 10;
    int b = 20;

    printf("Swap 전의 a = %d, b = %d\n", a, b);

    Swap(a, b); // Swap 함수 호출
    // 호출 시 a, b를 매개변수 x, y로 전달한다

    printf("Swap 후의 a = %d, b = %d\n", a, b); // 값은 바뀌지 않음

    return 0;

}
// Swap 함수 정의부
void Swap(int x, int y){
    int temp;

    // 매개변수 값 교환
    temp = x;
    x = y;
    y = temp;
    // 매개변수의 값은 교환되었지만, 교환된 값은 인자 a, b의 복사본이므로 Swap 함수 내에서 교환이 일어나도 원본은 변하지 않는다.

}
*/

// 10-2
#include <stdio.h>
void Swap(int *x, int *y);

int main(void){
    int a = 10;
    int b = 20;

    printf("Swap 전의 a = %d, b = %d\n", a, b);

    Swap(&a, &b); // Swap 함수 호출 시 a, b의 주소를 넘겨준다

    printf("Swap 후의 a = %d, b = %d\n", a, b); // 값이 바뀜

    return 0;
}
// Swap 함수 정의부
void Swap(int *x, int *y){
    int temp;

    // 매개변수 값 교환
    temp = *x;
    *x = *y;
    *y = temp;
    // 포인터를 이용해 a, b의 값을 직접 교환하기 때문에 Swap된 결과물이 반영된다.
    

}


// 컴프