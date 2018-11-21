#include <stdio.h>

int main(void){
    int n;
    scanf("%i", &n);
    int a[n], s[n];
    for (int i=0; i<n; ++i)
        scanf("%i", a+i);
    int k=0;
    for (int i=0; i<n; ++i){
        s[i]=k;
        if (!a[i])
            k++;
    }
    unsigned long long int suma=0;
    for (int i=0; i<n; ++i)
        if (a[i])
            suma+=s[i];
    printf("%llu\n", suma);
    return 0;
}