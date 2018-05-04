/* Készítette: Sipos Ferenc */
#include<stdio.h>
#define BUFSIZE 100
#define SIZE 5
char buf[BUFSIZE];
int bufp = 0;

getch ()
{
  return ((bufp > 0) ? buf[--bufp] : getchar ());
}

ungetch (int c) 
{
  if (bufp > BUFSIZE)
    printf ("ungetch, túl sok karakter\n");
  else
    buf[bufp++] = c;
}

int
getfloat (double *pf)
{
  int sign, c;
  int i = 10;
  while ((c = getch ()) == ' ' || c == '\t' || c == '\n') //Üreshelyek átugrása
    ;
  sign = 1;
  if (c == '+' || c == '-') //Előjel vizsgálat
    {
      sign = (c == '+') ? 1 : -1;
      c = getch ();
    }
  for (*pf = 0; c >= '0' && c <= '9'; c = getch ()) //Egész rész beolvasása
    {
      *pf = 10 * *pf + c - '0';
    }
  if (c == '.' || c == ',') //Tört rész beolvasása
    while ((c = getch ()) >= '0' && c <= '9')
      {
	*pf += (double) (c - '0') / i;
	i *= 10;
      }
  *pf *= sign;
  ungetch (c); //Átmeneti tárba való írás
  return getch (); //Átmeneti tárból való kiolvasás
}

int
main ()
{
  int n;
  double v, array[SIZE];
  for (n = 0; n < SIZE && getfloat (&v) != EOF; n++)
    {
      array[n] = v;
      printf ("%f\n", array[n]);
    }
  return 0;
}
