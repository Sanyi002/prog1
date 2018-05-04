#include <stdio.h>
#include <stdlib.h>


#define ascii_char 128

int main(void)
{
    int c, chars[ascii_char];


    for (c = 0; c < ascii_char; ++c)
        chars[c] = 0;


    while ((c = getchar()) != EOF)
        chars[c] += 1;


    for (c = 0; c < ascii_char; ++c)
    {
        if (chars[c] > 0)
        {
            if (c == '\b')
                printf("\\b");
            else if (c == '\n')
                printf("\\n");
            else if (c == '\t')
                printf("\\t");
            else
                printf("%2c", c);
            printf(" (%3d): %3d\n", c, chars[c]);
        }
    }
    return 0;
}
