#include <stdio.h>

int main(void) {
    int x, k[2], a=0;
    scanf("%i%i%i", &x, k, k+1);
    x-=(k[0]+k[1])*(x/(k[0]+k[1]));
    while(x>=0){
        x-=k[a];
        a=!a;
    }
    printf("%i\n", a);
    return 0;
}
