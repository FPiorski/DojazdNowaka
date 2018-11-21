#include <stdio.h>

int main(void){
    int n, tab[2]={0, 0}, k;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        tab[k]++;
    }
    printf("%i\n", (tab[0]>tab[1])?tab[1]:tab[0]);

    return 0;
}
