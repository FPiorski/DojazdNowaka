#include <stdio.h>
#include <string.h>

#define max(a,b) (((a)>(b))?(a):(b))
int main(void){
    int n, k;
    scanf("%i", &n);
    int tab[n];
    memset(tab, 0, n*sizeof(int));
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        if (k>n){
            printf("NIE\n");
            return 0;
        }
        --k;
        if (tab[k]){
            printf("NIE\n");
            return 0;
        }
        ++tab[k];
    }
    printf("TAK\n");
    return 0;
}
