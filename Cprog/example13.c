#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
    FILE *fp;
    char fname[100] = "/Users/ljw/Desktop/4_1/numbers.txt";
    int n;
    double root;

    srand(time(0));
    if((fp = fopen(fname, "a")) == NULL){
        fprintf(stderr, "파일 %s를 열 수 없음.\n ", fname);
        exit(1);
    }

    n = rand() % 100 + 1;
    root = sqrt(n);


    fprintf(fp, "%d의 제곱근은 %f입니다.\n", n, root);


    fclose(fp);
    
    return 0;
}
