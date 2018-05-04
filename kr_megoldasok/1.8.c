#include <stdio.h>

main ( )
{
   int c, nl=0,nw=0,t=0;

   while ((c = getchar( )) != EOF)
   {
		if (c == 10) ++nl;
		if (c== ' ') ++nw;
		if(c=='\t') ++t;
   }
   printf("uj sor:%d\tuj szo:%d\ntabulator:%d", nl,nw,t);
}
