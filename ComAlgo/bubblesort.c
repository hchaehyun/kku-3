#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[SIZE];

    // 데이터를 무작위로 생성합니다.
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % (SIZE * 10);
    }

    // 정렬 전 시간을 측정합니다.
    clock_t start_time = clock();

    // 버블 정렬을 수행합니다.
    bubble_sort(arr, SIZE);

    // 정렬 후 시간을 측정하고 경과 시간을 계산합니다.
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Bubble Sort completed in %.2f seconds.\n", elapsed_time);

    return 0;
}
