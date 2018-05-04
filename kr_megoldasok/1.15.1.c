
//csak a 80 karakternel hoszabb sorokat írja ki 
#include<stdio.h>
#include<stdlib.h>
#define MAXL 1000

int getlinee (char s[],int lim) {
  
  
    int i,c;
    for(i = 0;i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
	s[i] = c;

    if(c == '\n') {
	s[i] = c;
	++i;
    }
    s[i] = '\0';
    return i;
}

int main() {
  
    int len;
    char sor[MAXL];
    while ((len = getlinee(sor,MAXL)) > 0) {
	if (len >= 80)
	    printf("\n%s",sor);
    }
    printf("\n");





    return 0;
}
