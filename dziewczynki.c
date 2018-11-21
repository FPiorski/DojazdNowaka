#include <stdio.h>
#define min(a,b) (((a)>(b))?(b):(a))
int main(void){
    int n, k, t, l=0, p=0, m;
    scanf("%i%i", &n, &k);
    int tab[n];
    for (int i=0; i<n; ++i){
        scanf("%i", &t);
        if(!t){
            tab[l]=p;
            ++l;
            p=0;
        }
        if(t)
            ++p;
    }
    if (l<k){
        printf("NIE\n");
        return 0;
    }
    if (l==0){
        printf("0\n");
        return 0;
    }
    tab[0]=0;
    p=0;
    for (int i=0; i<k; ++i)
        p+=tab[i];
    if (k==l){
        printf("%i\n", p);
        return 0;
    }
    m=p;
    --k;
    p=0;
    for (int i=0; i<k; ++i)
        p+=tab[i];
    for (int i=0; i<l-k; ++i){
        p-=tab[i];
        p+=tab[i+k];
        if (i)
            m=min(m, p);
    }
    printf("%i\n", m);
    return 0;
}
