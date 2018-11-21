#include <stdio.h>

int main(void){
    int n, k, m=0, mi=0;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        if (!(k&1) && k>m){
            mi=i;
            m=k;
        }
    }
    printf("%i\n", mi+1);
    return 0;
}
