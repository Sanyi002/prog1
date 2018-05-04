/*  Kernighan 3. fejezet 3.1-es gyakorlat */
#include <stdio.h>
#define MAXLINE 1000    /*  maxiumum sor hossz  */
/*  getline - sz�veg beolvas�sa s-be    */
getline (char s[])
{
    int c,i;
    for (i=0;i<MAXLINE-1 && (c=getchar()) != EOF ;++i)
        s[i] = c;
    return s;
}
/*  expand - mik�zben az s karakterl�ncot a t
    karakterl�ncba m�solja - a l�thatatlan
    karaktereket (pl. �jsor �s a tab) l�that� escape szekvenci�kk�
    (pl.\n �s\t) alak�tja �t!   */
expand(char s1[], char s2[])
{
    int i,j;
    for (i=j=0; s1[i] != '\0' && s1[i] != EOF; i++){
        switch(s1[i]){
        case '\n' :  s2[j++] = 'N' ;break;
        case '\t': s2[j++] = 'T';break;
        default: s2[j++] = s1[i];break;
        }
    }
}
int main()
{
    char line1[MAXLINE];
    char line2[MAXLINE];
    getline(line1);
    expand(line1,line2);
    printf("%s",line2);
}
