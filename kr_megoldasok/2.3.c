#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000		/*beolvasott sor maximális hossza */
/*  s1-bõl minden olyan karaktert töröl amely megegyezik bármely
    s2-beli karakterrel */
squeeze (char s1[], char s2[])
{

  int i, j, k;

  for (i = j = 0; s1[i] != '\0'; i++)
    for (k = 0; s2[k] != '\0'; k++)
      {
	if (s1[i] != s2[k])
	  s1[j++] = s1[i];
      }

  s1[j] = '\0';

}

main ()
{
  char line[MAXLINE]="abcdefg";
  char line2[MAXLINE]="c";
  squeeze (line, line2);
  printf ("%s\n", line);
}
