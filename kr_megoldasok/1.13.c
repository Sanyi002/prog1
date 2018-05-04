#include<stdio.h>
#include<stdlib.h>

char lower(char c)	// A lower függvény megkapja a karaktert a c változóba.
{
	if(c<='Z'&&c>='A')	// Ha nagybetű
	return c+32;	//	akkor kisbetűvé alakítja (Hozzáad az ASCII kódhoz 32-t)
	else				 			
	return c;	// Másként visszatéríti azt,amit megkapott.
}
int main()	// A main függvény olvassa a karaktereket, és folyamatosan hívja a lower függvényt, míg a fájlvége karaktert nem kapja.
{
	int c;
	while(( c = getchar() ) != EOF)	
	{
	putchar(lower(c));
	}
return 0;
}
