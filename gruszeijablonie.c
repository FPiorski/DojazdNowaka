#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (((a)>(b))?(a):(b))

int main(void){
    int n, mxg=-1, mxj=-1, mig=-1, mij=-1, k;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &k);
        if (k && mij==-1)
            mij=i;
        if (!k && mig==-1)
            mig=i;
        if (k)
            mxj=i;
        if (!k)
            mxg=i;
    }
    printf("%i\n", max(abs(mxg-mij), abs(mxj-mig)) );
    return 0;
}
