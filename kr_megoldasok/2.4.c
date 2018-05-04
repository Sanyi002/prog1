#include <stdio.h>
#include <stdlib.h>

void squeeze(char tomb1[], char tomb2[])
{
    int i, j, k=0;
    int egyezike;

    for (i = 0; tomb1[i] != '\0'; i++) { //elmegy a tomb1 \0 végéig
        egyezike = 0;
        for (j = 0; tomb2[j] != '\0'; j++) //elmegy a tomb2 \0 végéig
            {
                if (tomb2[j] == tomb1[i]) //ha egyezik a kettő érték
                egyezike = 1;   //egyezik-e IGAZ
            }
        
        if (egyezike == 0)  //ha nem egyezik
        {
                    tomb1[k] = tomb1[i]; //melyikbe másolja; az aktuálisat (k=0,1...)
                    k++; //majd növeljük a k értékét
        }

    }
    tomb1[k] = '\0'; //ha nem egyezik a karakter, a modositott végét, lezárjuk \0-val
}

int main(void)
{
    char tomb1[] = "abcdef";
    char tomb2[] = "abc";
    squeeze(tomb1, tomb2);
    printf("%s\n", tomb1); //string

return 0;
}