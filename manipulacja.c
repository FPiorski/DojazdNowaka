#include <stdio.h>

int main(void){
    int n, m, s=1, t=1, k;
    scanf("%i%i", &n, &m);
    int tab[m];
    for (int i=0; i<m; ++i)
        scanf("%i", tab+i);
    for (int i=1; i<n; ++i){
        t=1;
        for (int j=0; j<m; ++j){
            scanf("%i", &k);
            if (!k && tab[j])
                t=0;
        }
        s+=t;
    }
    printf("1 %i\n", s);
    return 0;
}
