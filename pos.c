#include <stdio.h>

int main(void){
    int k, l, m, n;
    scanf("%i", &k);
    l=m=0;
    while (k && k%10!=7){
        n=(k%10);
        for (int i=0; i<m; ++i)
            n*=10;
        l+=n;
        m++;
        k/=10;
    }
    printf("%i\n", l);
    return 0;
}
