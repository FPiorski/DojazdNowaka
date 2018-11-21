#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)>(b))?(b):(a))

int main(void){
    int x[4], y[4];
    for (int i=0; i<4; ++i)
        scanf("%i%i", x+i, y+i);
    pmax=max(pmax, p);
    printf("%i\n", pmax);
    return 0;
}
