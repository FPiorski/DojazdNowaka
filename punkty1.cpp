extern "C"{
    #include <stdio.h>
    #include <stdlib.h>

    typedef struct intpair {
        int x, y;
    } intpair;

    int cmp(const void *a, const void *b);

    int main(void){
        intpair *tab;
        int n;

        scanf("%i", &n);
        tab=(intpair*)malloc( n * sizeof(intpair) );

        for (int i=0; i<n; ++i)
            scanf("%i %i", &((tab+i)->x), &((tab+i)->y));

        qsort(tab, n, sizeof(intpair), cmp);

        for (int i=0; i<n; ++i)
            printf("%i %i\n", (tab+i)->x, (tab+i)->y);

        free(tab);

        return 0;
    }

    int cmp(const void *a, const void *b)
    {
        intpair *_a = (intpair*)a;
        intpair *_b = (intpair*)b;
        if(_a->x < _b->x) return -1;
        else if(_a->x > _b->x) return 1;
        else{
            if (_a->y < _b->y) return -1;
            else if (_a->y > _b->y) return 1;
            else return 0;
        }
    }
}