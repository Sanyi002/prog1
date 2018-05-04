#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned x);

int main(void)
{
    printf("%d\n", bitcount(0777));
    return 0;
}


int bitcount(unsigned x)
{
    int q;
    for (q = 0; x != 0; x &= (x-1))
        q++;
    return q;
}
