#include <stdio.h>


struct student{
    char name[10];
    int hakbun;
    int score;
}; 

int main(){
    FILE *fp;
    struct student arr[3];

    fp = fopen("/Users/hamchaehyeon/Desktop/score.txt", "r");

    // 파일 열기 실패 시
    if(fp == NULL){
        printf("Failed to open file\n");
        return 1;
    }
    // 구조체 배열 arr에 저장
    for(int i = 0; i < 3; i++){
        fscanf(fp, "%s %d %d", arr[i].name, &arr[i].hakbun, &arr[i].score);
    }

    // 콘솔에 출력
    for(int i = 0; i < 3; i++){
        printf("name: %s, hakbun: %d, score: %d\n", arr[i].name, arr[i].hakbun, arr[i].score);
    }


    fclose(fp);

    return 0;
}
