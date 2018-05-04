#include <stdio.h>
#include <stdlib.h>

#define TABWIDTH 8

int main(void)
{
    int i;
    int c, bal, s;

    bal = 0;
    while((c = getchar()) != EOF) {
        if (c == '\t') {
            s = TABWIDTH - bal % TABWIDTH;
            for (i = 0; i < s; ++i)
                putchar(' ');
            bal = bal + s;
        } else {
            putchar(c);
            bal = bal + 1;
            if (c == '\n')
                bal = 0;
        }
    }
    return 0;
}
