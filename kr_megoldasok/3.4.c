
/*
Írjunk itoh(n,s) függvényt amely az n unsigned egész számot bináris
karakterábrázolásban az s karakterláncba konvertálja, és olyan itoh
függvényt is, amely a számot hexadecimális ábrázolásba alakít át!
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

void itob (unsigned int n, char s[]) {

	unsigned int szam = n;
	int i;
	if(n > 0){
	s[0] = (szam % 2) ? '1':'0';
	i = 1;
	while(szam > 0) {
		szam /=2; 
		if(szam % 2 == 1)
			s[i] = '1';
		else s[i] = '0';	
		++i;
	}
			
	s[i-1] = '\0';
	reverse(s);
	}
	else if (n == 0) {s[0] = '0'; s[1] = '\0'; }
}

void itoh (unsigned int n, char s[]) {

	unsigned int szam = n;
	int i;
	i = 0;
	if(n != 0) {
	while(szam > 0) {
	   switch (szam % 16) {
		case 0 : s[i] = '0'; break;
		case 1 : s[i] = '1'; break;
		case 2 : s[i] = '2'; break;
		case 3 : s[i] = '3'; break;
		case 4 : s[i] = '4'; break;	
		case 5 : s[i] = '5'; break;
		case 6 : s[i] = '6'; break;
		case 7 : s[i] = '7'; break;
		case 8 : s[i] = '8'; break;
		case 9 : s[i] = '9'; break;
		case 10 : s[i] = 'A'; break;
		case 11 : s[i] = 'B'; break;
		case 12 : s[i] = 'C'; break;
		case 13 : s[i] = 'D'; break;
		case 14 : s[i] = 'E'; break;
		case 15 : s[i] = 'F'; break;
	   }
	   ++i;
	   szam /=16;	
	}		
	s[i] = '\0';
	reverse(s);
	}
	else if (n == 0) {s[0] = '0'; s[1] = '\0'; }
}

int main() {

	char s[10000];
	unsigned int szam,szr;
	printf("Adja meg a szamot : "); scanf("%u",&szam);
	printf("Adja meg a szamrendszert(2 / 16) : "); scanf("%u",&szr);	
	if(szr == 2) {	
		itob(szam,s);
		printf("\nA szam kettes szamrendszerben : %s\n",s);
	}
	else if (szr == 16) {
		itoh(szam,s);
		printf("\nA szam kettes szamrendszerben : %s\n",s);

	}
	return 0;
}
