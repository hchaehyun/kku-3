#include <stdio.h>

int gcd(int a, int b){
    if(b > a) return gcd(b, a);
    if(b == 0) return a;

    return gcd(b, a%b);

    // return b == 0 ? a : gcd(b, a%b);
}