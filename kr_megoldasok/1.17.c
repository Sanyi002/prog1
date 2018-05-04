#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000



int getlinee(char s[],int n){
        int c,i;
        for(i = 0;i < n && (c=getchar()) != EOF && c != '\n';++i)
	     s[i] = c;        
	s[i] = '\0';
	 return(i);
}



void reverse (char s[]) {
    
    int i,j = 0;
    char seged[MAX];
    strcpy(seged,s);
    for(i = strlen(seged)-1; i >= 0;--i) {
	s[j++] = seged[i];
    }
    s[j] = '\0';
    printf("%s ---->  %s\n\n",seged,s);
}


int main() {

    int n;
    char s[MAX];
    while((n = getlinee(s,MAX)) > 0) {
	reverse(s);
    }
    return 0;
}