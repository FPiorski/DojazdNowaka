#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)>(b))?(b):(a))

int main(void){
    int a, b, n;
    scanf("%i%i%i", &a, &b, &n);
    printf("%i\n",  a/n + b/n + 1 - !(n%a) - !(n%b) );
    return 0;
}
