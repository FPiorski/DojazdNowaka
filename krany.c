#include <stdio.h>
#include <stdlib.h>
#define ULLI unsigned long long int

int cmp(const void *a, const void *b);

int main(void) {
    int n, w, k, l = 0, s = 0, ws, odp = 0;
    scanf("%i%i", &n, &w);
    ULLI tab[n];
    for (int i = 0; i < n; ++i) {
        scanf("%i", &k);
        if (k > 0) {
            tab[l] = k;
            s += k;
            ++l;
        }
    }
    
    qsort(tab, l, sizeof(ULLI), cmp);

    ws = l * w;
    while (s < ws && s > 0) {
        s -= tab[odp];
        ws -= w;
        odp++;
    }
    if (s > 0 && s >= ws)
        printf("%i\n", odp);
    else
        printf("NIE\n");
    return 0;
}

int cmp(const void *a, const void *b) {
    if((*(int*)(a)) > (*(int*)(b)))
        return 1;
    else if((*(int*)(a)) < (*(int*)(b)))
        return -1;
    else return 0;
}
