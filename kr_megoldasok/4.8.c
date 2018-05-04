/* Készítette: Sipos Ferenc */
#include<stdio.h>
#include<string.h>

void
reverse (char s[], int i, int j)
{
  char temp;
  if (i < j)
    {
      temp = s[i];
      s[i] = s[j];
      s[j] = temp;
      ++i;
      --j;
      reverse (s, i, j);
    }
}

int
main ()
{
  char s[] = "Korte";
  int i = 0;
  int j = strlen (s) - 1;
  reverse (s, i, j);
  for (; i <= j; ++i)
    printf ("%c", s[i]);
  printf ("\n");
  return 0;
}
