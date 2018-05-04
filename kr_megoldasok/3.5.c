
/*
Írjuk meg az itoa függvénynek azt a változatát, kettő helyett három
argumentumot fogad! A harmadik argumentum a minimálsi mezőszélesség;
az átkonvertált számot szükség esetén balról üres közökkel kell kitölteni,
hogy elég hosszú legyen
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse (char s []){

	int c,i,j;
	for(i = 0 , j = strlen(s)-1;i<j; ++i , --j) {

		c = s[i];
		s[i] = s [j];
		s[j] = c;
	}
}

void itoa (char s [], int n, int msz) {

	int i, sign,j;
	if((sign = n) < 0)
		n = -n;

	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while((n /= 10) > 0);
	
		int hosz = i;
	
	if(sign < 0) {					//Nem voltam biztos benne hogy az előjel
							//beletartozik e a mezőszélességbe, de
		for(j = 0;j < (msz-hosz)-1;++j)		//úgyvettem hogy igen.
		s[i++] = '0';
		s[i++] = '-';
	}
	else {
	for(j = 0;j < (msz-hosz);++j)
		s[i++] = '0';
	
	}

	s [i] = '\0';
	reverse (s);
}

int main() {

	int i,msz;
	char s[1000];
	printf("Adja meg a konvertalando szamot  : "); scanf("%d",&i);
	printf("Adja meg a minimalis mezoszelesseget  : "); scanf("%d",&msz);
	itoa(s,i,msz);
	printf("\nA szam karakterlanca konvertalva : %s\nA karakterlanc hossza : %d\n",s,strlen(s));



	return 0;
}
