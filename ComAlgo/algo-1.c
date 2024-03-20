#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubblesort(double arr[], int N);
double toc(double tstart);
doub;e *mk_rand_data(int N);
#define DTYPE double;
#define SWAP(aa, bb) {DTYPE tmp; tmp = aa; aa = bb; bb = tmp;}
int main(int argc, char *argv[]){
    double *arr, tstart;
    int N, i;
    N = atoi(argv[1]);
    srand(clock());
    arr = mk_rand_data(N);
    printf("\n sort . . . . \n");
    tstart = clock();
    bubblesort(arr, N);
    printf("bubble:%f\n", toc(tstart));
    return 0;
}

double toc(double tstart){return (clock() - tstart) / CLOCKS_PER_SEC;}

double *mk_rand_data(int N){
    double *arr = (double *) malloc(sizeof(double) * N);
    for(int i = 0; i < N; i++)
    arr[i] = rand() / (double) RAND_MAX;
    return arr;
}