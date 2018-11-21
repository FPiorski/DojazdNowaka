#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))

int main(void){
    int a, b, t[3];
    scanf("%i%i", &a, &b);
    t[0]=a+b;
    t[1]=a-b;
    t[2]=a*b;
    int m=max(max(t[0], t[1]), t[2]), i;
    i = (t[0]==m) + (t[1]==m) + (t[2]==m);
    if (i>1)
        printf("NIE\n");
    else
        printf("%s%i%s%s%s%s%s%i%s=%s%i%s\n", &"("[a>=0], a, &")"[a>=0], 
                                          &"+"[!(t[0]==m)],
                                          &"-"[!(t[1]==m)],
                                          &"*"[!(t[2]==m)],
                                          &"("[b>=0], b, &")"[b>=0],
                                          &"("[m>=0], m, &")"[m>=0]);
    return 0;
}
