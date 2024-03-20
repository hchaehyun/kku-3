// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student{
    char name[10];
    int hakbun;
    int score;
};


int main(){
    FILE *fp;
    struct student s;


    fp = fopen("/Users/hamchaehyeon/Documents/score.dat", "rb");
    if(fp == NULL){
        printf("파일열기 실패");
        return 0;
    }

    while(fread (&s, sizeof(struct student), 1, fp) == 1){

        printf("%s, ", s.name);
        printf("%d, ", s.hakbun);
        printf("%d\n", s.score);
    }

    fclose(fp);


    
    return 0;
}
