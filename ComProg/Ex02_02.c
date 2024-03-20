// 6-5
#include <stdio.h>

int main(void){

    int i_res;
    double f_res;

    i_res = GetFactorial(5); // 아직 정의되지 않은 함수 호출, 컴파일 경고
    printf("5! = %d\n", i_res);

    f_res = GetMax(0.5, 10.5, 12.5); // 아직 정의되지 않은 함수 호출, 컴파일 경고
    printf("최대값 = %f\n", f_res);

    // 아직 정의되지 않은 함수를 호출 할 경우, 컴파일러는 해당 함수가 int형을 리턴한다고 간주하고 자동으로 int형으로 반환한다.
    // GetFactorial의 경우 int형을 반환하는 함수이기에 결과값에 문제가 없지만, GetMax는 double타입을 반환하는 함수이기에 결과값이 달라짐.

return 0;
}

int GetFactorial(int num){  //GetFactorial 함수 정의부

    int i;
    int fact = 1;

    for(i = 1 ; i <= num ; i++){
    fact *= i;
    }

return fact;
}


double GetMax(double a, double b, double c){ //GetMax 함수 정의부

    double max;

    max = a > b ? a : b;
    max = c > max ? c : max;

return max;
}