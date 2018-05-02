%{
	#include <stdio.h>
	#include <string.h>
	int sorok_szama = 0;
}%
%%
\n  ++sorok_szama;
%%
int
main ()
{
	yylex ();
	printf("%d sor", sorok_szama);

	return 0;
}
