//elhagyja az uressorokat es a szovegi szokozoket es tabokat
#include<stdio.h>
#include<stdlib.h>
#define MAXL 1000

int getlinee(char s[],int lim) {

    int i,c;
    for(i = 0;i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
	s [i] = c;

    if(c == '\n') {
	s[i] = '\n';
	++i;
    }

    s[i] = '\0';

    return i;
}

int main() {

    char sor[MAXL];
    int len,i;

    while ((len = getlinee(sor,MAXL)) > 0) {
	while (sor[len-2] == ' ' || sor[len-2] == '\t') {
	    sor[len-2] = '\n';
	    sor[len-1] = '\0';
	    len--;
	}
	if (len != 1)
	    printf("%s",sor);
    }
    printf("\n");

    return 0;
}
