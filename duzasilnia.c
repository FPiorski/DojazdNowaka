#include <stdio.h>

unsigned long long int silnia(unsigned long long int i);

int main(void){
    unsigned long long int n;
    scanf("%llu", &n);
    if (n>40){
        printf("0\n");
        return 0;
    }
    printf("%llu\n", silnia(n));
    return 0;
}

unsigned long long int silnia(unsigned long long int i){
    if (i<=1)
        return 1;
    else return ((silnia(i-1)%1000000000)*(i%1000000000))%1000000000;
}
