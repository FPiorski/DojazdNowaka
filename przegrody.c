#include <stdio.h>

#define min(a,b) ( ( (a)>(b) ) ? (b) : (a) )

int main(void){
    int n, p=0, m=n;
    scanf("%i", &n);
    int tab[n], pos=n-1;
    for (int i=0; i<n; ++i){
        scanf("%i", tab+i);
        tab[i]--;
    }
    while(pos>=0){
        if (pos<m)
            ++p;
        m=min(m, tab[pos]);
        --pos;
    }
    printf("%i\n", p);
    return 0;
}
