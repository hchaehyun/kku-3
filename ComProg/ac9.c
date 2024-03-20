/*
// 9-1
#include<stdio.h>
#include<string.h>

struct product{ // 구조체 정의
    char name[20];
    int price;
    int stock;
};

int main(void){
    struct product prd1; // 구조체 변수 선언
    struct product prd2 = {"생수2L", 9500, 20}; // 구조체 변수 선언과 동시에 초기화

    prd1.price = 15000; // 구조체 변수가 가진 멤버 접근시에 . 연산자 사용, prd1 구조체의 price 멤버에 접근한 것
    prd1.stock = 30;
    strcpy(prd1.name, "커피믹스"); // strcpy 함수 사용해 "커피믹스" 복사해서 prd1.name에 삽입

    printf("%s : %d원, 재고량=%d\n", prd1.name, prd1.price, prd1.stock);
    printf("%s : %d원, 재고량=%d\n", prd2.name, prd2.price, prd2.stock);

    return 0;
}


// 9-2
#include<stdio.h>

struct point{ // 구조체 정의
    int x, y;
    };

    int main(void){
        struct point pt1, pt2; // 구조체 변수 선언

        printf("pt1의 x, y 좌표를 입력하세요 : ");
        scanf("%d %d", &pt1.x, &pt1.y); // scanf로 입력받으면서 구조체 변수 멤버 입력

        printf("pt2의 x, y 좌표를 입력하세요 : ");
        scanf("%d %d", &pt2.x, &pt2.y);

        if(pt1.x == pt2.x && pt1.y == pt2.y) // 입력받은 멤버의 값이 같은지 비교
            printf("두 점의 좌표가 같습니다.\n");
        else
            printf("두 점의 좌표가 다릅니다.\n");

        return 0;
    }


// 9-3
#include <stdio.h>

struct point{
    int x, y;
};

int main(void){
    struct point pt1 = {10, 20}; // 구조체 변수 선언과 동시에 초기화
    struct point pt2 = {30, 40};
    struct point pt3 = pt1; // 구조체 간의 초기화, 변수를 선언하면서 값을 저장하는 건 초기화
    struct point pt4;

    printf("pt1의 좌표 : %d, %d\n", pt1.x, pt1.y);
    printf("pt3의 좌표 : %d, %d\n", pt3.x, pt3.y);
    if(pt1.x == pt3.x && pt1.y == pt3.y)
        printf("pt1과 pt3의 좌표가 같습니다.\n");
    else
    printf("pt1과 pt3의 좌표가 다릅니다.\n");

    pt4 = pt2; // 구조체 간의 대입, 이미 선언된 변수에 값을 저장하는 건 대입

    printf("pt2의 좌표 : %d, %d\n", pt2.x, pt2.y);
    printf("pt4의 좌표 : %d, %d\n", pt4.x, pt4.y);
    if(pt2.x == pt4.x && pt2.y == pt4.y)
        printf("pt2과 pt4의 좌표가 같습니다.\n");
    else
    printf("pt2과 pt4의 좌표가 다릅니다.\n");

    return 0;
    
    
}
*/

// 9-4

#include<stdio.h>
#include<string.h>

#define MAX_PRODUCT 5 // 구조체 배열 크기 선언

struct product{ // 구조체 정의
    char name[20];
    int price;
    int stock;
};

int main(void){
    struct product prd[MAX_PRODUCT]; // 구조체 배열의 선언
    int i;

    printf("%d 개의 상품정보를 입력하세요. \n", MAX_PRODUCT);
    // 구조체 배열 입력
    for(i = 0; i < MAX_PRODUCT; i++){ // MAX_PRODUCT 사이즈가 될때까지 i++
        printf("상품명 : ");
        scanf("%s", prd[i].name); // 구조체 배열에 삽입
        printf("가격, 재고량 : ");
        scanf("%d %d", &prd[i].price, &prd[i].stock); // 구조체 배열에 삽입
    }

    printf("\n상 품 명          가 격       재 고 량\n");

    for(i = 0; i < MAX_PRODUCT; i++){
        printf("%-20s %8d %10d", prd[i].name, prd[i].price, prd[i].stock);
        if(prd[i].stock < 10) // stock 배열에 있는 값이 10 미만이면
            printf(" ==> 재고 부족! 주문 필요!\n");
        else
        printf("\n");
    }
    return 0;
}


// 9-5
#include<stdio.h>
#include<math.h>

struct point{ // 구조체 정의
    int x, y;
};

// 구조체 포인터 p1, p2를 매개변수로 갖는 함수를 선언
double GetDistance(struct point* p1, struct point* p2);


int main(void){
    struct point pt1 = {0, 0};
    struct point pt2 = {10, 10};
    double distance;

    // 함수의 인자형이 struct point* 형이므로 구조체 변수 주소를 함수의 인자로 전달 &
    distance = GetDistance(&pt1, &pt2); 
    printf("두 점 사이의 거리 : %5.2f\n", distance);

    return 0;
}

// 구조체 포인터를 인자로 갖는 함수
double GetDistance(struct point* p1, struct point* p2){ // p1에 pt1, p2에 pt2 주소 전달
    int dx = p2->x - p1->x; // p2가 가리키는 x - p1이 가리키는 x
    int dy = p2->y - p1->y; // p2가 가리키는 y - p1이 가리키는 y

    return sqrt(dx*dx + dy*dy); // sqrt 제곱근 구하는 함수, 헤더 math.h
}


// 9-8
#include<stdio.h>

enum week{sun, mon, tue, wed, thu, fri, sat}; // 열거체 정의
// 열거체 week는 해당 값을 열거상수로 정의, sun은 0, mon은 1... 이런식으로 열거 상수 정의

int main(void){

    enum week weekday; // 열거체형 변수 선언
    weekday = mon; // 열거 상수 사용, 실제로는 int형 변수에 int 값이 저장된다. 즉 weekday에 1 저장

    switch(weekday){
        case sun:
        printf("일요일입니다.\n");
        break;
        
        case mon:
        printf("월요일입니다.\n");
        break;

        case tue:
        printf("화요일입니다.\n");
        break;

        case wed:
        printf("수요일입니다.\n");
        break;

        case thu:
        printf("목요일입니다.\n");
        break;

        case fri:
        printf("금요일입니다.\n");
        break;

        case sat:
        printf("토요일입니다.\n");
        break;
    }

    return 0;
}
*/

