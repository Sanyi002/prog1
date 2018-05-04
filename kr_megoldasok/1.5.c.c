
#include <stdio.h>
main()
{
	int fahr = 0, cels;
	int lower = 0, upper = 300, step = 20;

	printf("\n");
	for ( ; fahr <= upper; fahr += step)
	{
		cels = 5 * (fahr- 32) / 8;
		printf("%d\t%d\n",fahr,cels);
	}
}
