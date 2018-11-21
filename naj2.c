#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))

int tab[26];

int main(void){
    char c;
    int m=0, n, k;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        k=0;
        while ( (c=getchar()) != '\n' )
            ++k;
        m=max(m, k);
    }
    printf("%i\n", m);
    return 0;
}
