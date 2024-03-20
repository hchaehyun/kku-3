// 202023615_함채현_프로그래밍실습_1주차과제
#include<stdio.h>
#include<string.h>

struct values{
    int n1, n2;
    double x1, x2;
};

void print_values(struct values *v){
    printf("n1 = %d, n2 = %d, x1 = %.6f, x2 = %.6f\n", 
            v -> n1, v -> n2, v -> x1, v -> x2);
    };

void double_values(struct values *v){
    v -> n1 *= 2;
    v -> n2 *= 2;
    v -> x1 *= 2;
    v -> x2 *= 2;
}

int main(){
    struct values s;

    s.n1 = 1;
    s.n2 = 2;
    s.x1 = 0.1;
    s.x2 = 0.2;
    print_values(&s);
    double_values(&s);
    print_values(&s);
    return 0;
}
