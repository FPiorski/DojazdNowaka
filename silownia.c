#include <stdio.h>

int nwd(int a, int b);

int main(void){
    int a, b, n;
    scanf("%i%i%i", &a, &b, &n);
    printf("%i\n",  n/a + n/b - n/((a*b)/nwd(a, b)));
    return 0;
}

int nwd(int a, int b){
    int c;
    while(b != 0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
