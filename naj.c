#include <stdio.h>
#include <ctype.h>
#define max(a,b) (((a)>(b))?(a):(b))

int main(void){
    char c;
    int m=0, s=0;
    while ( isalpha(c=getchar()) ){
        s=(c-'a')?0:s+1;
        m=max(m, s);
    }
    if (m){
        while (m--)
            printf("a");
        printf("\n");
        return 0;
    }
    printf("BRAK\n");
    return 0;
}
