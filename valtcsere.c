#include <stdio.h>


int main() {
	int a,b;

	a = 2;
	b = 3;

	a = b - a;
	b = b - a;
	a = b + a;
	
	printf("a:%d,b:%d", a, b);

	return 0;

}
