#include <stdio.h>
#include <inttypes.h>
#define U32 uint32_t

U32 fib[1000001];

int main(void){
    int z, p;
    U32 s, t;
    scanf("%i", &z);
    fib[0]=fib[1]=1;
    for (int i=2; i<1000001; ++i)
        fib[i]=fib[i-1]+fib[i-2];
    for (int i=0; i<z; ++i){
        scanf("%" SCNu32 " %i", &s, &p);
        printf("%" PRIu32 "\n", fib[s]&(((U32)(-1))>>(32-p)));
    }
    return 0;
}
