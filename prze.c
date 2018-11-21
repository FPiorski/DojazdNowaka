#include <stdio.h>
#include <math.h>

int main(void){
    unsigned long long int n, k, x;
    scanf("%llu", &n);
    k=7*n;
    x=2*sqrt(M_PI*k);
    printf("%llu\n", x);
    return 0;
}
