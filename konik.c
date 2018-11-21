#include <stdio.h>

int main(void){
    int x, s, a=0;
    scanf("%i%i", &x, &s);
    if (s>x){
        printf("1\n");
        return 0;
    }
    while ( (s-1) && x>0 ){
        ++a;
        x-=s;
        s>>=1;
    }
    if (x>=0)
        printf("%i\n", a+x);
    else
        printf("%i\n", a);
    return 0;
}
