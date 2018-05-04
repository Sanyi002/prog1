#include<stdio.h>

int main()
{
    int c,lastc;
    lastc = 88;
    while((c = getchar()) != EOF)
    {
        if (c!=' ' || lastc!=' ') putchar (c);
        lastc= c;
    }
}
