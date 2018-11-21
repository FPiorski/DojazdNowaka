#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a)>(b))?(b):(a))

int main(void){
    int n;
    scanf("%i", &n);
    int tab[3][n];
    for (int i=0; i<n; ++i)
        scanf("%i", tab[0]+i);
    tab[1][0]=tab[0][0];
    for (int i=1; i<n; ++i)
        tab[1][i]=tab[1][i-1]+tab[0][i];
    tab[2][0]=tab[0][n-1];
    for (int i=n-1; i>=0; --i)
        tab[2][i]=tab[2][i+1]+tab[0][i];
    printf("%i\n", s);
    return 0;
}
