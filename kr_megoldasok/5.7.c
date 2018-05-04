/*Készítette Sipos Ferenc*/
#include<stdio.h>

#define MAXOP 100
#define MAXMUVELET 100

double add(double operandus[], int dbop, char muvelet[]) {
double eredmeny=0.0;
int i=dbop-1;
int j=0;
int fl=0; 
/* Jelzés arra, hogy történt-e már művelet, ha nem akkor két operandussal végzi el a műveletet, 
egyébként az eredménnyel és a soron következő operandussal*/
	
for(operandus[i]; i > 0; ) {
		switch (muvelet[j++]) {
		case '+': (fl) ? (eredmeny+=operandus[--i]) : (eredmeny=operandus[i]+operandus[--i]);
			  break;
		case '-': (fl) ? (eredmeny-=operandus[--i]) : (eredmeny=operandus[i]-operandus[--i]);
			  break;
		case 'x': (fl) ? (eredmeny*=operandus[--i]) : (eredmeny=operandus[i]*operandus[--i]);
			  break;
		case '/': (fl) ? (eredmeny/=operandus[--i]) :  (eredmeny=operandus[i]/operandus[--i]);
			  break;
		}
	fl=1;
	}
return(eredmeny);
} 

int main(int argc, char **argv) {
char *s;
double operandus[MAXOP];
char muvelet[MAXMUVELET];
int dbop,i,j;
double eredmeny;
eredmeny=dbop=i=j=0;


while (s=*++argv) {
	if (*s == '+' || *s == '-' || *s == 'x' || *s == '/') {
	muvelet[j++]=*s;
	muvelet[j]='\0';
	}
	if (*s>='0' && *s<='9') {
	operandus[i]=*s-'0';
	++i;
	++dbop;
	}

}
eredmeny=add(operandus,dbop,muvelet);
printf("%.2lf\n",eredmeny);

return 0;
}
