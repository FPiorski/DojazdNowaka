#include <stdio.h>
#define min(a,b) (((a)>(b))?(b):(a))

int main(void){
    int n, m=100000, k, s=0;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            scanf("%i", &k);
            s+=k;
        }

    }
    printf("%i %i %i %i %i %i\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return 0;
}
