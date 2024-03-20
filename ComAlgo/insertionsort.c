#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    // 삽입 정렬을 수행합니다.
    insertion_sort(arr, SIZE);

    // 정렬 후 시간을 측정하고 경과 시간을 계산합니다.
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Insertion Sort completed in %.2f seconds.\n", elapsed_time);

    return 0;
}
