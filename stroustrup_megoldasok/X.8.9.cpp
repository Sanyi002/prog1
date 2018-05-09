#include <iostream>

void f( char ) {};
void g( char& ) {};
void h( const char& ) {};

int main()
{
	char c;
	unsigned char uc;
	signed char sc;

	f('a');			// elfogadja mivel karaktert vár a függvény
	f(49);			// elfogadja mivel a 49 karakterként az ASCII táblából veszi az értékét
	f(3300);		// nem fogadja el mivel túllépi a 256os int határt
	f(c);			// elfogadja mivel karaktert vár
	f(uc);			// elfogadja mert ez is karaktert
	f(sc);			// úgyszintén

	g('a');			// nem fogadja el karakter referenciaként
	g(49);			// nem fogadja el karakter referenciaként
	g(3300);		// nem fogadja el karakter referenciaként
	g(c);			// csak ezt fogadja el mivel ez "normális" karakter
	g(uc);			// nem fogadja el karakter referenciaként
	g(sc);			// nem fogadja el karakter referenciaként

	h('a');			// elfogadja mivel karaktert vár a függvény
	h(49);			// elfogadja mivel a 49 karakterként az ASCII táblából veszi az értékét
	h(3300);		// nem fogadja el mivel túllépi a 256os int határt
	h(c);			// elfogadja mivel karaktert vár
	h(uc);			// elfogadja mert ez is karaktert
	h(sc);			// úgyszintén
	
	return 0;
}