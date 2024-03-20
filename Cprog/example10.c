#include <stdio.h>

double fact(int k) {
    if(k == 0){ 
        return 1;
    }

    double f = 1;

    for(int i = 1; i <= k; i++){ 
        f *= i;
    }
    return f;
}

int main(){
    printf("n\t\te\n");
    printf("— ———————\n");


    for(int n = 0; n <= 9; n++){

        double e = 0;
        for(int k = 0; k <= n; k++){

            e += 1.0 / fact(k);
        }
        printf("%d  %.10lf\n", n, e);
    }

    
    return 0;
}