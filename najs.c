#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))

int tab[6];

int main(void){
    char c;
    int m=0, n, k=0;
    scanf("%i", &n);
    while ( (c=getchar()) != EOF )
    {
        k=(c-'\n')?k+1:0;
        m=max(m, k);
    }
    printf("%i\n", m);
    return 0;
}
