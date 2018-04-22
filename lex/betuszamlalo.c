%{
	#include <stdio.h>
	#include <string.h>
	int betuk_szama = 0, szavak_szama = 0, szamok_szama = 0, sorok_szama = 0;
}%
%%
.						++betuk_szama;
[a-zA-Z][a-zA-Z0-9]*	{betuk_szama += strlen(yytext);}
%%
int
main ()
{
	yylex ();
	printf("%d betu ", betuk_szama);

	return 0;
}