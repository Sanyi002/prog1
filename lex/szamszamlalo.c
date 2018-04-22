%{
	#include <stdio.h>
	#include <string.h>
	int betuk_szama = 0, szavak_szama = 0, szamok_szama = 0, sorok_szama = 0;
}%
%%
[0-9]+ {++szamok_szama;}
%%
int main ()
{
	yylex ();
	printf("%d szam", szamok_szama);

	return 0;
}