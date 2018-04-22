/*Kistamás Dávid GNH2NV  csop: csüt. 16-18h*/

%{
	#include <stdio.h>
	#include <string.h>
	int szavak_szama = 0;
}%
%%
[a-zA-Z]* {++szavak_szama;}
%%
int main ()
{
	yylex ();
	printf("%d szo\n", szavak_szama);

	return 0;
}