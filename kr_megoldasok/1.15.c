#include <stdio.h>
int celsiusra(int fahr, int also, int felso, int lepes)
{
    int celsius;
    fahr = also;
    while (fahr <= felso)
    {
      celsius = 5 * (fahr-32) / 9;
      printf("%d\t%d\n", fahr, celsius);
      fahr = fahr + lepes;
    }
}

main()
{
   int fahr;
   int also, felso, lepes;
   also = 0;
   felso = 300;
   lepes = 20;

   celsiusra(fahr,also,felso,lepes);
}

