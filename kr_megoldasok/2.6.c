#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  return (x & ((~0 << (p + 1)) | (~(~0 << (p + 1 - n))))) | ((y & ~(~0 << n)) << (p + 1 - n));
}

int main(void)
{
  unsigned x;
  unsigned y;
  unsigned k;
  int p;
  int n;
  printf("Adja meg az x-et: ");
  scanf("%d",&x);
  printf("Adja meg az y-t: ");
  scanf("%d",&y);
  printf("Adja meg a p-t: ");
  scanf("%d",&p);
  printf("Adja meg az n-et: ");
  scanf("%d",&n);
     k = setbits(x, p, n, y);
	 printf("setbits(%u, %d, %d, %u) = %u\n", x, p, n, y, k);

  return 0;
}
