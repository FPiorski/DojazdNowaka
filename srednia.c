#include <stdio.h>

int main(void){
    int n, s=0, a, b;
    scanf("%i", &n);
    int tab[n];
    for (int i=0; i<n; ++i)
        scanf("%i", tab+i);
    scanf("%i %i", &a, &b);
    --a; --b;
    for (int i=a; i<=b; ++i)
        s+=tab[i];
    printf("%i\n", s/(b-a+1));
    return 0;
}
