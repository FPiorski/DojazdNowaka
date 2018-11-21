#include <stdio.h>
#include <algorithm>
#define ULLI unsigned long long int

int main(void){
    int n, w, k, l=0, s=0, ws, odp=0;
    scanf("%i%i", &n, &w);
    ULLI tab[n];
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        if (k>0){
            tab[l]=k;
            s+=k;
            ++l;
        }
    }
    std::sort(tab, tab+l);
    ws=l*w;
    while (s<ws && s>0){
        s-=tab[odp];
        ws-=w;
        odp++;
    }
    if (s>0 && s>=ws)
        printf("%i\n", odp);
    else
        printf("NIE\n");
    return 0;
}
