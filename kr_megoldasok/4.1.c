/*  Kernighan 4.fejezet 4.1 gyakorlat   */
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000
strlen(char s[])    /*  s string hosszat    */
{
    int i;
    for (i=0;s[i] != '\0';i++);
    return (i);
}
/*  t s-beli legjobboldalibb elõfordulásának
    pozícióját adja vissza, ill. -1-et ad, ha t nem fordul elõ s-ben!   */
rindex(char s [], char t [])
{
    int i, j, k;

    for (i = strlen(s)-1; s[i] > 0; i--) {
    for (j=i ,k=strlen(t)-1 ; t[k] > 0 && s[j] == t[k]; j-- , k--);
    if (t[k] == 0)
    return (i+1);
    }
    return (-1);
}

int main()
{
    char s1[MAXLINE]="abcdefgh";
    char s2[MAXLINE]="l";
    //printf("strlen(s1)=%d @ strlen(s2)=%d\n",strlen(s1),strlen(s2));
    printf("%d\n",rindex(s1,s2));
}
