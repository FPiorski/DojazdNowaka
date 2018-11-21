#include <stdio.h>

int main(void){
    int n, m, l;
    scanf("%i %i", &n, &m);
    double ceny[n], k, s=0;
    for (int i=0; i<n; ++i)
        scanf("%lf", ceny+i);
    for (int i=0; i<m; ++i){
        scanf("%i %lf", &l, &k);
        s+=ceny[l-1]*k;
    }
    printf("%i\n", (int)(s));
    return 0;
}
