#include <stdio.h>

int main(void){
    long long int c, z, n, fzol, fzie, fnie, ffio, fcze, fpom;
    scanf("%lli%lli%lli%lli%lli%lli%lli%lli%lli",
           &c, &z, &n, &fzol, &fzie, &fnie, &ffio, &fcze, &fpom);
    c*=100; z*=100; n*=100;
    fzol*=100; fzie*=100; fnie*=100;
    ffio*=100; fcze*=100; fpom*=100;
    c-=fcze; z-=fzol; n-=fnie;
    c-=fpom/2; z-=fpom/2;
    z-=fzie/2; n-=fzie/2;
    n-=ffio/2; c-=ffio/2;
    long long int t[3];
    t[0]=c*(-1); t[1]=z*(-1); t[2]=n*(-1);
    for (int i=0; i<3; ++i){
        if(t[i]<=0)
            printf("0 ");
        else if ( (t[i]%10) + ((t[i]/10) % 10) == 0 )
            printf("%lli ", t[i]/100);
        else
            printf("%.1lf ", (double)(t[i]/10)/10 );
    }
    printf("\n");
    return 0;
}
