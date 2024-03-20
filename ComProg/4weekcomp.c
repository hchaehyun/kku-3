/*
// 2-2
#include <stdio.h>

int main(){
    float num;
    int i_part;
    float f_part;

    printf("실수를 입력하세요 : ");
    scanf("%f", &num);

    i_part = num;
    f_part = num - i_part;

    printf("%f의 정수부는 %d이고, 실수부는 %f입니다.\n", num, i_part, f_part);

    return 0;

}


//3-1
#include <stdio.h>

int main(){
    int amount;
    int price = 1000;

    printf("수량 : %d, 가격 : %d\n", amount, price);
    amount = 100;
    price = 2000;
    printf("수량 : %d, 가격 : %d\n", amount, price);

    return 0;
}


// 3-2

#include <stdio.h>
int main(){
    char grade = '\x41';
    int data = 0x7b;
    unsigned int age = 75U;
    long filesize = 1234567L;
    double area = 123.25;
    double taxRate = 25e-2;
    float temperature = 17.5F;

    printf("grade = %c\n", grade);
    printf("data = %d, %o, %x\n", data, data, data);
    printf("age = %u\n", age);
    printf("filesize = %d\n", filesize);
    printf("area = %f, %e, %g\n", area, area, area);
    printf("taxRate = %f\n", taxRate);
    printf("temperature = %f\n", temperature);

    return 0;

    
}

*/

// 3-3
#include <stdio.h>
#define MAX 100

int main(){
    int num1 = MAX;
    int num2 = MAX -1;
    int num3 = -MAX;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);
    printf("MAX = %d\n", MAX);

    return 0;

}

/*

// 3-4
#include <stdio.h>

int main(){
    const double PI = 3.14;
    const int MAX_COUNT;

    printf("PI = %f\n", PI);
    printf("MAX_COUNT = %d\n", MAX_COUNT);

    PI = 3.1415;
    MAX_COUNT = 100;

    return 0;
}



//3-5
#include <stdio.h>

int main(){
    char ch;

    scanf("%c", &ch);
    printf("%c 문자의 ASCII 코드 : %d (%x)\n", ch,ch,ch);

    return 0;
}



// 3-6
#include <stdio.h>

int main(void){
    short num1 = -10;
    unsigned short num2 = num1;

    printf("부호 있는 정수 : %d\n", num1);
    printf("부호 없는 정수 : %d\n", num2);

    return 0;
    
}


// 3-7
#include <stdio.h>

int main(void){
    short num1 = 32767;
    short num2 = -32768;

    unsigned short num3 = 65535;
    unsigned short num4 = 0;

    num1 = num1 + 1;
    num2 = num2 - 1;
    num3 = num3 + 1;
    num4 = num4 - 1;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);
    printf("num4 = %d\n", num4);

    return 0;
}


// 3-8
#include <stdio.h>
#include <limits.h>

int main(void){
    short num1 = SHRT_MAX;
    short num2 = SHRT_MIN;

    unsigned short num3 = USHRT_MAX;
    unsigned short num4 = 0;

    num1 = num1 + 1;
    num2 = num2 - 1;
    num3 = num3 + 1;
    num4 = num4 - 1;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);
    printf("num4 = %d\n", num4);

    return 0;
}


// 3-9
#include <stdio.h>

int main(void){
    float pi1 = 3.141592653589793;
    double pi2 = 3.141592653589793;

    printf("float 형의 pi 값 : %f\n", pi1);
    printf("double 형의 pi 값 : %f\n", pi2);

    printf("float 형의 pi 값 : %30.25f\n", pi1);
    printf("double 형의 pi 값 : %30.25f\n", pi2);

    return 0;
}


// 3-10
#include <stdio.h>
int main(void){
    float num1 = 3.5e39;
    float num2 = 1.8e-39;

    printf("num1 = %30.25f\n", num1);
    printf("num2 = %30.25f\n", num2);
}


// 3-11
#include <stdio.h>
int main(void){
    char ch;
    int num;
    double fnum;

    printf("ch의 바이트 크기 : %d\n", sizeof ch);
    printf("num의 바이트 크기 : %d\n", sizeof num);
    printf("fnum의 바이트 크기 : %d\n", sizeof fnum);

    printf("3.14f의 바이트 크기 : %d\n", sizeof 3.14f);

    printf("char 형의 바이트 크기 : %d\n", sizeof(char));
    printf("short의 형바이트 크기 : %d\n", sizeof(short));
    printf("int의 형바이트 크기 : %d\n", sizeof(int));
    printf("long의 형바이트 크기 : %d\n", sizeof(long));
    printf("float의 형바이트 크기 : %d\n", sizeof(float));
    printf("double의 형바이트 크기 : %d\n", sizeof(double));

    return 0;
}
*/