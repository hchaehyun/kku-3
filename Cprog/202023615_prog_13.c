#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // 난수 생성
#include <math.h>

int main(void) {
    FILE *fp;
    char fname[100] = "/Users/hamchaehyeon/Desktop/numbers.txt";
    int n;
    double root;

    srand(time(0)); // 난수 생성 초기화, 시드로 현재시간

    // append ("a") 모드로 파일 오픈
    if ((fp = fopen(fname, "a")) == NULL) {
        fprintf(stderr, "파일 %s을 열 수 없습니다.\n ", fname);
        exit(1);
    }


    n = rand() % 100 + 1; // 1~100 사이의 무작위 정수 n을 생성
    root = sqrt(n); // n의 제곱근을 계산합니다.
    fprintf(fp, "%d의 제곱근은 %f입니다.\n", n, root);
        
    fclose(fp);
    return 0;
}
