#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    for (int i=2; i<n; ++i)
        if (n%i){
            printf("%i %i\n", i, n-1);
            return 0;
        }
}
