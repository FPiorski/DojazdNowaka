#include <stdio.h>

int main(void) {
    int n, a, b;
    char t[2][4]={"TAK", "NIE"};
    scanf("%i", &n);
    for (int i=0; i<n; ++i){
        scanf("%i%i", &a, &b);
        printf("%s\n", t[!!(b%a)]);
    }
    return 0;
}
