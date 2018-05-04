#include<stdio.h>
#define swap(x,y) {x-=y; y+=x; x=y-x;}

int
main ()
{
  int x, y;
  printf ("Add meg x értékét\n");
  scanf ("%d", &x);
  printf ("Add meg y értékét\n");
  scanf ("%d", &y);
  swap (x, y) printf ("Megcserélve\n");
  printf ("x=%d y=%d\n", x, y);

  return 0;
}
