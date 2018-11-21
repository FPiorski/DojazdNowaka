#include <stdio.h>

typedef struct{
    int a, b;
} intpair;

int cmp(const intpair *a, const intpair *b);

int main(void){
    int n, d, a, b;
    scanf("%i%i", &n, &d);
    intpair tab[n];
    for (int i=0; i<n; ++i){
        scanf("%i%i", &a, &b);
        tab[i].a=a*b;
        tab[i].b=((a-2)/d+2)*((b-2)/d+2);
    }
    intpair m;
    m.a=tab->a; m.b=tab->b;
    for (int i=1; i<n; ++i)
        m=(cmp(&m, tab+i)?m:tab[i]);
    printf("%i\n", m.a);
    return 0;
}

int cmp(const intpair *a, const intpair *b){
    intpair _a=*a, _b=*b;
    if (_a.b!=_b.b)
        return _a.b>_b.b;
    else
        return _a.a>_b.a;
}
