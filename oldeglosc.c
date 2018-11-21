#include <stdio.h>
#include <stdlib.h>

#define max(a,b) ( ((a)>(b))?(a):(b) )

int main(void){
    int n, m=0, m2=0;
    scanf("%i", &n);
    int a[n];
    for (int i=0; i<n; ++i){
        scanf("%i", a+i);
        m=max(m, a[i]+i);
        m2=max(m2, a[i]-i);
    }
    printf("%i\n", m+m2);
    return 0;
}
