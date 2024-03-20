#include <stdio.h>

double fact(int k) {
    if (k == 0) { // 0!은 1이므로 k == 0이면 return 1
        return 1;
    }
    double f = 1; // 팩토리얼 값 저장할 변수 1로 초기화
    for (int i = 1; i <= k; i++) { //k! 부분, 1~k까지 i값을 fact에 곱해 누적
        f *= i;
    }
    return f;
}

int main() {
    printf("n\t\te\n");
    printf("-- --------------\n");

    for (int n = 0; n <= 9; n++) {
        double e = 0;
        for (int k = 0; k <= n; k++) {
            e += 1.0 / fact(k);
        }
        printf("%d  %.10lf\n", n, e); // 소수점 아래 10자리까지 출력
    }
    return 0;
}
