#include <stdio.h>

int m[26]={0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,2,2};

int main(void){
    int n, w, g, s=0;
    char c;
    scanf("%i %i", &n, &w);
    int tab[n][3];
    for (int i=0; i<n; ++i)
        tab[i][0]=tab[i][1]=tab[i][2]=0;
    for (int i=0; i<w; ++i){
        scanf("%i %c", &g, &c);
        if (tab[g-1][m[c]])
            s--;
        else
            s++;
        tab[g-1][m[c]]^=1;
    }
    printf("%i\n", s);
    return 0;
}
