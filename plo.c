#include <stdio.h>
#define min(a,b) (((a)>(b))?(b):(a))

int main(void){
    int o, n, m=100000, k, s;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &o);
        s=0;
        for (int j=0; j<o; ++j){
            scanf("%i", &k);
            s+=k;
        }
        m=min(m, s);
    }
    printf("%i\n", m);
    return 0;
}
