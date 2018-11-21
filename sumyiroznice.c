#include <stdio.h>

int main(void) {
    int n, k, p, s=0;
    scanf("%i", &n);
    int tab[n];
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        if (k<min){
            s=i;
            min=k;
            if(k<i)
                b=1;
            s+=n-1;
        }
    }
    printf("%i\n", b?-1:s);
    return 0;
}
