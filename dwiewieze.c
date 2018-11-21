#include <stdio.h>
#include <stdlib.h>

typedef struct intpair{
    unsigned long long int a, b;
} intpair;

int main(void){
    int n, m, k;
    unsigned long long int s;
    scanf("%i %i", &n, &m);
    intpair *tabn, *tabm;
    tabn=malloc((n+1)*sizeof(intpair));
    tabm=malloc((m+1)*sizeof(intpair));
    tabn[0].a=tabm[0].a=0;
    tabn[0].b=n;
    tabm[0].b=m;
    s=0;
    for (int i=1; i<=n; ++i){
        scanf("%i", &k);
        s+=k;
        tabn[i].a=s;
        tabn[i].b=n-i;
    }
    s=0;
    for (int i=1; i<=m; ++i){
        scanf("%i", &k);
        s+=k;
        tabm[i].a=s;
        tabm[i].b=m-i;
    }
    int in=n, im=m;
    while ( in>=0 && im>=0 ){
        if (tabn[in].a==tabm[im].a){
            printf("%i\n", tabn[in].b+tabm[im].b);
            free(tabn);
            free(tabm);
            return 0;
        }
        if (tabn[in].a>tabm[im].a)
            in--;
        else
            im--;
    }

    return 0;
}
