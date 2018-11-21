#include <stdio.h>
#include <stdlib.h>

#define max(a,b) (((a)>(b))?(a):(b))
int main(void){
    int n, m=0;
    scanf("%i", &n);
    int tab[n];
    char **stab;
    stab=(char**)(malloc(n*sizeof(char*)));
    for (int i=0; i<n; ++i){
        stab[i]=(char*)(malloc(101));
        scanf("%s %i", *(stab+i), tab+i);
    }
    for (int i=0; i<n; ++i)
        m=max(m, tab[i]);
    for (int i=0; i<n; ++i)
        if (tab[i]==m)
            printf("%s\n", stab[i]);
    for (int i=0; i<n; ++i)
        free(stab[i]);
    free(stab);
    return 0;
}
