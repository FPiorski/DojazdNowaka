#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, k, f1, f2, j;
    size_t ssiz=1000;
    char *s1, *s2;
    s1=(char*)(malloc(ssiz));
    int tab[2][1001];
    tab[0][1000]=tab[1][1000]=0;
    scanf("%i", &n);
    scanf(" ");
    for (int i=0; i<n; ++i){
        getline(&s1, &ssiz, stdin);
        s2=s1;
        f1=s2[0]=='d';
        while ((s2++)[0]!=' ')
            ;
        f2=s2[0]=='g';
        if (f1){
            while ((s2++)[0]!=' ')
                ;
            j=0;
            while (s2[j++]!='\n')
                ;
            s2[--j]='\0';
            k=atoi(s2);
            tab[f2][tab[f2][1000]]=k;
            tab[f2][1000]++;
        }else{
            printf("%i\n", tab[f2][tab[f2][1000]-1]);
            --tab[f2][1000];
        }
    }
    free(s1);

    return 0;
}
