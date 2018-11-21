#include <stdio.h>

int t[1000000];

int main(void){
    int n, k, l, s=0;
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i%i", &k, &l);
        if (!t[l-1]){
            ++s;
            t[l-1]=1;
        }
    }
    printf("%i\n", s);
    return 0;
}
