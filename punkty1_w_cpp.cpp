#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

typedef struct intpair {
    int x, y;
} intpair;

int main(void){
    intpair *tab;
    int n;

    scanf("%i", &n);
    tab=(intpair*)malloc( n * sizeof(intpair) );

    for (int i=0; i<n; ++i)
        scanf("%i %i", &((tab+i)->x), &((tab+i)->y));

    struct {
        bool operator()(intpair a, intpair b) const
        {   
            if (a.x==b.x)
                return a.y<b.y;
            return a.x < b.x;
        }   
    } customcmp;
    std::sort(tab[0], tab[n-1], customcmp);

    for (int i=0; i<n; ++i)
        printf("%i %i\n", (tab+i)->x, (tab+i)->y);

    free(tab);

    return 0;
}
