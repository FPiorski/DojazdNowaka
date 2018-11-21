#include <stdio.h>

int main(void){
    int n, a, s=0;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i", &a);
        s+=a;
    }
    printf("%i\n", s);
    return 0;
}
