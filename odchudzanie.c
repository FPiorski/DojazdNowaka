#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
int main(void){
    int a, b, c, aa, bb, cc;
    scanf("%i%i%i", &a, &b, &c);
    aa=a*a; bb=b*b; cc=c*c;
    printf("%i\n", ( (aa==bb+cc) || (bb==aa+cc) || (cc==aa+bb) ) + (a==b && a==c) );
    return 0;
}
