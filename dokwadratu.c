#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    scanf("%i", &a);
    b=sqrt(a);
    if (b*b==a){
        printf("%i\n", a);
        return 0;
    }
    c=(b+1)*(b+1);
    while (a<=c){
        printf("%i ", a);
        ++a;
    }
    printf("\n");
    return 0;
}
