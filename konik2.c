#include <stdio.h>

int main(void){
    int x, s;
    scanf("%i%i", &x, &s);
    if (2*s<=x)
        printf("NIE\n");
    else
        printf("TAK\n");
    return 0;
}
