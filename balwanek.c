#include <stdio.h>

int main(void) {
    int x, k, l;
    scanf("%i%i", &x, &k);
    k*=1000;
    x*=1000;
    l = 7*k;
    if (l>x) {
        l = 3*k + k/2;
        if (l>x){
            l = k + k/2 + k/4;
            if(l>x)
                l=0;
        }
    }
    printf("%i\n", l);
    return 0;
}
