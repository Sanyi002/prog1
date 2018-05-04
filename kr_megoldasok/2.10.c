#include <stdio.h>
#include <string.h>

int lower(int c)
{
   return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}

int main()
{
 char *teszt = "AaBbcCD3EdFGHgIJKLhM2NOjPQRkSTlUVWfXYf0Z1";
  char *p = teszt;
  int eredmeny = 0;

  while('\0' != *p)
  {
    eredmeny = lower(*p);
    printf("%c Eredmeny %c\n",*p, eredmeny);
    ++p;
  }
  return 0;
}
