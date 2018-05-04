#include <stdio.h>
#include <string.h>

void expand(char * s1, char * s2);

int main(void) {
    char *s[] = { "a-z-", "z-a-", "-1-6-","a-ee-a", "a-R-L", "1-9-1","5-5", NULL };
    char eredmeny[100];
    int i = 0;

    while ( s[i] ) {



        expand(eredmeny, s[i]);
        printf("Expand_1: %s\n", s[i]);
        printf("Expand_2  : %s\n", eredmeny);
        ++i;
    }

    return 0;
}



void expand(char * s1, char * s2) {
    static char nagy[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static char kis[27] = "abcdefghijklmnopqrstuvwxyz";
    static char kozep[11]     = "0123456789";

    char * start, * end, * p;
    int i = 0;
    int j = 0;

    while ( s2[i] ) {
        switch( s2[i] ) {
        case '-':
            if ( i == 0 || s2[i+1] == '\0' ) {



                s1[j++] = '-';
                ++i;
                break;
            }
            else {



                if ( (start = strchr(nagy, s2[i-1])) &&
                     (end   = strchr(nagy, s2[i+1])) )
                    ;
                else if ( (start = strchr(kis, s2[i-1])) &&
                          (end   = strchr(kis, s2[i+1])) )
                    ;
                else if ( (start = strchr(kozep, s2[i-1])) &&
                          (end   = strchr(kozep, s2[i+1])) )
                    ;
                else {


                    fprintf(stderr, "1: Nem egyeztheto karakterek'%c-%c'\n",
                            s2[i-1], s2[i+1]);
                    s1[j++] = s2[i-1];
                    s1[j++] = s2[i++];
                    break;
                }




                p = start;
                while ( p != end ) {
                    s1[j++] = *p;
                    if ( end > start )
                        ++p;
                    else
                        --p;
                }
                s1[j++] = *p;
                i += 2;
            }
            break;

        default:
            if ( s2[i+1] == '-' && s2[i+2] != '\0' ) {
                 ++i;
            }
            else {

                s1[j++] = s2[i++];
            }
            break;
        }
    }
    s1[j] = s2[i];
}
