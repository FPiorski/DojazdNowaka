#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (((a)>(b))?(a):(b))

int main(void){
    int n, k;
    scanf("%i %i", &n, &k);
    int tab[n];
    for (int i=0; i<n; ++i)
        scanf("%i", tab+i);
    if (k>=n){
        printf("%i\n", n);
        return 0;
    }
    std::sort(tab, tab+n);
    int m=0, j=1;
    for (int i=0; i<=n-k-2; ++i){
        if (tab[i]==tab[i+1])
            j++;
        else
            j=1;
        m=max(m, j);
    }
    printf("%i\n", m+k);
    return 0;
}
