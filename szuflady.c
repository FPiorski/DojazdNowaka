#include <stdio.h>

int main(void) {
    int n, p, s=0;
    scanf("%i", &n);
    int tab[n];
    for (int i=0; i<n; ++i){
        scanf("%i", tab+i);
    }
    p=tab[n-1];
    for (int i=n-2; i>=0; --i){
        if(tab[i]<p)
            p=tab[i];
        else{
            --p;
            ++s;
        }
        if (p<=0){
            printf("-1\n");
            return 0;
        }
    }
    printf("%i\n", s);
    return 0;
}
