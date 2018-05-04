//
/*
Írjunk olyan programot, amely a bemenetét a kimenetrére másolja,
de ha a bemenetére egymás után többször érkezik ugyanaz a sor,
azt csak egyszer nyomtatja ki.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000

int getlinee(char s[],int n)
{
        int c,i;
        
        for(i = 0;i < n && (c=getchar()) != EOF && c != '\n';++i) 
		s[i] = c;

        s[i] = '\0';
        
        return(i);
}

int main() {

	char line [MAX];
	char preline[MAX];
	int n;		
	while((n = getlinee(line,MAX)) > 0) {
		if(strcmp(line,preline) != 0)
			puts(line);
		strcpy(preline,line);
	}
	return 0;
}
