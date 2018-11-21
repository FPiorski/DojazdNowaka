#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))

int main(void){
    int a, b, t[3];
    scanf("%i%i", &a, &b);
    t[0]=a+b;
    t[1]=a-b;
    t[2]=a*b;
    int m=max(max(t[0], t[1]), t[2]);
    printf("%i\n", s);
    return 0;
}
