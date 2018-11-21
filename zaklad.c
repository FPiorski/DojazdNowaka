#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);

int main(void) {
    int n, k, t, tab[6]={0, 0, 0, 0, 0, 0}, l=0;
    scanf("%i%i", &n, &k);
    for (int i=0; i<n; ++i){
        scanf("%i", &t);
        --t;
        if(!tab[t])
            ++l;
        ++tab[t];
    }
    if (l==k){
        printf("0\n");
        return 0;
    }
    if (l<k){
        printf("%i\n", k-l);
        return 0;
    }
    qsort(tab, 6, sizeof(int), cmp);
    t=0;
    int *ta=tab+6-l;
    for (int i=0; i<l-k; ++i)
        t+=ta[i];
    printf("%i\n", t);
    return 0;
}

int cmp(const void *a, const void *b){
    int _a=*(int*)a, _b=*(int*)b;
    return (_a>_b)?1:((_a==_b)?0:-1);
}