#include <stdio.h>

int main(void){
    int n, a[3], k;
    scanf("%i", &n);
    scanf("%i", a);
    scanf("%i", a+1);
    k=2;
    for (int i=2; i<n; ++i){
        scanf("%i", a+k);
        k=(k+1)%3;
        if( a[0]+a[1]+a[2]==3 && a[0]*a[1]*a[2]==0){
            printf("TAK\n");
            for (int j=i+1; j<n; ++j)
                scanf("%i", &k);
            return 0;
        }

    }    
    printf("NIE\n");
    return 0;
}
