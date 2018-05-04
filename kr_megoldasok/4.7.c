/* Készítette: Sipos Ferenc */
#include<stdio.h>

int
itoa (int n, char s[])
{
  int i = 0;

  if (n / 10 != 0)
    i = itoa (n / 10, s); 
  else if (n < 0)
    s[i++] = '-'; //Ha negatív, akkor tegye ki az előjelet
  
  s[i++] = abs (n % 10) + '0'; //Kell az abszolútérték-fv., mivel negatív is lehet a szám
  s[i] = '\0';
  return i; //Visszaadja az indexet
}

int
main ()
{
  char s[1024];
  int n;
  printf ("Adj meg egy egész számot!");
  scanf ("%d", &n);
  itoa (n, s);
  int i = 0;
  while (s[i] != '\0')
    {
      printf ("%c", s[i]);
      ++i;
    }
  return 0;
}
