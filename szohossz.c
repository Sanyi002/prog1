#include <stdio.h>

int main(void) {
    int h = 0;
    int n = 0x01;

    do 
        ++h;
    while(n <<= 1);
    printf("A szóhossz ezen a gépen: %d bites\n", h);
    return 0;
}