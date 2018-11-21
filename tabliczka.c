#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int n, k, tab[6]={0, 0, 0, 0, 0, 0}, l=0;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        --k;
        if(!tab[k])
            l++;
        ++tab[k];
    }


    printf("%i");
    return 0;
}
