#include <stdio.h>
#include <stdlib.h>

unsigned rightrot(unsigned x, unsigned n);
void bin(int szam);
unsigned rightrot2(unsigned x, unsigned n);

int main(void)
{
    int n,b;
    printf("Adja meg az elforgatandó számot: ");
    scanf("%d",&b);
    printf("\n");
    bin(b);
    printf("Adja meg az elforgatás mértékét: ");
    scanf("%d",&n);
    printf("\n");
    printf("Elforgatás logikai művelettel: ");
    printf("%u\n", rightrot2(b, n));
    bin(rightrot2(b,n));
    printf("Az elforgatás után kapott érték: ");
    printf("%u\n", rightrot(b, n));
    bin(rightrot(b,n));
    return 0;
}

unsigned rightrot2(unsigned x, unsigned n)
{
    return x>>n|x<<((sizeof(unsigned)*8)-n);
}

unsigned rightrot(unsigned x, unsigned n)
{
    while (n > 0) {
        if(x & 1)
            x = (x >> 1) | ~(~0U >> 1);
        else
            x = x >> 1;
        --n;
    }
    return x;
}	

void bin(int szam){
int i;
	for (i=sizeof(int)*8-1;i>=0;i--)
	{
	printf("%d",rightrot(szam,i)&1);
	}
printf("\n");
printf("\n");
}
