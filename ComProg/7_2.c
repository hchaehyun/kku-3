/*
// 7-5
#include <stdio.h>
#define SIZE 10

int main(void){
    int array[SIZE] = {23, 96, 35, 42, 81, 19, 8, 77, 50, 64};
    int i, j, index;
    int temp;

    for(i = 0; i < SIZE-1; i++){
        index = i;
        for(j = i + 1; j < SIZE; j++){
            if(array[index] > array[j])
                index = j;
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    printf("정렬 결과 : ");
    for(i = 0; i < SIZE; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}




// 7-6
#include <stdio.h>

int main(void){
    short data[2][3];
    int i, j;

    data[0][0] = 1;
    data[0][1] = 2;
    data[0][2] = 3;
    data[1][0] = 4;
    data[1][1] = 5;
    data[1][2] = 6;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
    return 0;
}





// 7-7
#include <stdio.h>

int main(void){
    char str1[4] = "abc";
    char str2[10] = "12345";
    char str3[] = "Hello World";

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);

    return 0;
}





// 7-8
#include <stdio.h>
#include <string.h>

int main(void){
    char str1[20], str2[20];

    strcpy(str1, "abcde");
    printf("str1 = %s\n", str1);

    strcpy(str2, str1);
    printf("str2 = %s\n", str2);

    return 0;
}
*/




// 7-9
#include <stdio.h>
#include <string.h>

int main(void){
    char str1[] = "abcde";
    char str2[10] = "";

    printf("str1의 길이 = %d\n", strlen(str1));
    printf("str2의 길이 = %d\n", strlen(str2));
    printf("문자열의 길이 = %d\n", strlen("Hello World"));

    return 0;
}