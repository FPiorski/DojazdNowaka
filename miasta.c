#include <stdio.h>

int main(void){
    int n, k;
    scanf("%i", &n);
    int tab[2][n-1], kek[2][n];
    for (int i=0; i<n-1; ++i){
        scanf("%i", &k);
        tab[0][i]=tab[1][i]=0;
        tab[k&1][i]=tab[!!k][i]=1;
    }
    kek[0][0]=kek[1][n-1]=0;
    for (int i=0; i<n-1; ++i){
        kek[0][i+1]=0;
        if (tab[1][i])
            kek[0][i+1]=kek[0][i]+1;
    }
    for (int i=n-1; i>0; --i){
        kek[1][i-1]=0;
        if (tab[0][i-1])
            kek[1][i-1]=kek[1][i]+1;
    }
    for (int i=0; i<n; ++i)
        printf("%i ", kek[0][i]+kek[1][i]);
    printf("\n");
    return 0;
}
