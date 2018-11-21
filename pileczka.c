#include <stdio.h>

int main(void){
    int z, x, w, k, b;
    scanf("%i", &z);
    for (int i=0; i<z; ++i){
        scanf("%i%i", &x, &w);
        if(w<=x){
            printf("0\n");
            continue;
        }
        k=(w-1)/x;
        b=1;
        while(k/=2)
            ++b;
        printf("%i\n", b);
    }
    return 0;
}
