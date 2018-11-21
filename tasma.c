#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (((a)>(b))?(b):(a))

int main(void){
    int n, m=2000000001;
    scanf("%i", &n);
    int tab[3][n];
    for (int i=0; i<n; ++i)
        scanf("%i", tab[0]+i);
    tab[1][0]=tab[0][0];
    for (int i=1; i<n; ++i)
        tab[1][i]=tab[1][i-1]+tab[0][i];
    tab[2][n-1]=tab[0][n-1];
    for (int i=n-2; i>=0; --i)
        tab[2][i]=tab[2][i+1]+tab[0][i];
    for (int i=0; i<n-1; ++i){
        m=min(m, abs(tab[1][i]-tab[2][i+1]));
    }
    printf("%i\n", m);
    return 0;
}
