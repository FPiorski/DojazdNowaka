#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
    uint32_t n, t, i, m;
    scanf("%"SCNu32"%"SCNu32, &n, &t);
    m = 1 << n;
    if (t & 1) {
        uint32_t *tab = malloc(m * sizeof(uint32_t));
        for (i = 0; i < m; ++i)
            scanf("%"SCNu32, tab+i );
        for (i = m; i > 0; --i)
            printf("%"PRIu32" ", *(tab+i-1) );
        free(tab);
    } else {
        uint32_t _t;
        for (i = 0; i < m; ++i) {
            scanf("%"SCNu32, &_t);
            printf("%"PRIu32" ", _t);
        }
    }
    return 0;
}