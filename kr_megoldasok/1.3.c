#include <stdio.h>

int main()
{
float fahr, celsius;
int also, felso, lepes;

also = 0;
felso = 300;
lepes = 20;

printf("Fahr.:\tCelsius.\n");
fahr = also;
  
while(fahr <= felso) {
	celsius = (5.0 / 9.0) * (fahr - 32.0);
	printf("%3.0f\t%6.1f\n", fahr, celsius);
	fahr = fahr + lepes;
}

  return 0;
}
