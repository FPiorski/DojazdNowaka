#include <stdio.h>
#define min(a,b) (((a)>(b))?(b):(a))

int main(void){
    int n, m=1000000001, k;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        m=min(m, k);
    }
    printf("%.2f\n", (float)(m));
    return 0;
}
