#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))

int tab[37];

int main(void){
    int n, k, m=0;
    scanf("%i", &n);
    
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        tab[k]++;
    }
    for (int i=0; i<37; ++i)
        m=max(m, tab[i]);
    for (int i=36; i>=0; --i)
        if (tab[i]==m){
            printf("%i\n", i);
            return 0;
        }
    return 0;
}
