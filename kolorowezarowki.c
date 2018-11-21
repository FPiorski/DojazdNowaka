#include <stdio.h>

int main(void){
    int n, k;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        printf("%i ", (k&1)?k<<1:k);
    }
    printf("\n");
    return 0;
}
