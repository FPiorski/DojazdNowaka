#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point {
    int x, y;
    double d;
} point;

int cmp(const void *a, const void *b);

int main(void){
    point *tab;
    int n;

    scanf("%i", &n);
    tab=malloc( n * sizeof(point) );

    for (int i=0; i<n; ++i)
        scanf("%i %i", &((tab+i)->x), &((tab+i)->y));

    for (int i=0; i<n; ++i)
        tab[i].d=sqrt( tab[i].x*tab[i].x + tab[i].y*tab[i].y );

    qsort(tab, n, sizeof(point), cmp);

    for (int i=0; i<n; ++i)
        printf("%i %i\n", (tab+i)->x, (tab+i)->y);

    free(tab);

    return 0;
}

int cmp(const void *a, const void *b)
{
    point *_a = (point*)a;
    point *_b = (point*)b;
    if(_a->d < _b->d) return 1;
    else if(_a->d > _b->d) return -1;
    else{
        if (_a->x < _b->x) return -1;
        else if (_a->x > _b->x) return 1;
        else{
            if (_a->y < _b->y) return -1;
            else if (_a->y > _b->y) return 1;
            return 0;   
        }
    }
}
