#include <stdio.h>
#define SIZE 5

int main(){
    int a[SIZE][SIZE] = { // a 배열 선언
        {1, 0, 0, 0, 0},
        {2, 3, 0, 0, 0},
        {4, 5, 6, 0, 0},
        {7, 8, 9, 10, 0},
        {11, 12, 13, 14, 15}
        
    };
    

    int b[SIZE][SIZE] = {0}; // 모든 요소 0으로 채움


    // 90도 회전
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            b[j][SIZE - 1 - i] = a[i][j];
        }

    }

    // 배열 b 출력
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }



    return 0;

}

