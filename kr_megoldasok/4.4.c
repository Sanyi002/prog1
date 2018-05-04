//Abai Richárd
#include <stdio.h>
#include <string.h>

#define BUFFMERET 100

char buf[BUFFMERET]; //az ungetch buffere
int bufk = 0; //a következő pozíciója

int getch (void) //karakterbekérés
{
	return (bufk > 0) ? buf[--bufk] : getchar();
}

void ungetch(int c)
{
	if(bufk >= BUFFMERET)
		printf("ungetch: túl sok karakter\n");
	else
		buf[bufk++] = c;
}

void ungets (const char *s)
{	
	size_t i = strlen(s);

	while (i>0)
		ungetch(s[--i]);
}

int main(void)
{
	char *s = "Teszt kimenet\n";
	int c;

	ungets(s);
	while((c=getch()) != EOF)
		putchar(c);
	return 0;
}
