#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define THRESHOLD 25
#define ARRAY_SIZE 1000000

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void insertion_sort(int arr[], int low, int high) {
    for (int i = low + 1; i <= high; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= low && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        if (high - low <= THRESHOLD) {
            insertion_sort(arr, low, high);
        } else {
            int pi = partition(arr, low, high);
            quick_sort(arr, low, pi - 1);
            quick_sort(arr, pi + 1, high);
        }
    }
}

int main() {
    int n = ARRAY_SIZE;
    int arr[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (n * 10);
    }

    clock_t start = clock();
    quick_sort(arr, 0, n - 1);
    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time spent: %.6f seconds\n", time_spent);

    return 0;
}
