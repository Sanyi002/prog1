
/*
Írjunk olyan rightsh(n,b) függvényt, amely b számú
pozícióval jobra történő biteltolást végez az n
egész típusú menyiségen.
+Mutatja a bitmintát és annak változását a forgatás után az,
az ellenőrzés elősegítésére.
*/

#include<stdio.h>
#include<stdlib.h>

void bitminta(int c) {
    int i;
    for(i = (sizeof(int)*8)-1;i >= 0; i--)
    
	printf("%d", (c >>i) & 1);
}

int rightsh(int n, int b) {
    
    return n >> b;

}


int main() {

    int n,b;
    printf("Adja meg n erteket : "); scanf("%d",&n);
    bitminta(n);
    printf("\nAdja meg a forgatas merteket : "); scanf("%d",&b);
    if (b>(sizeof(int)*8)) 
	while (b>(sizeof(int)*8))
	b%=(sizeof(int)*8);
    printf("\nA forgatas eredmenye : %d\n",rightsh(n,b));
    bitminta(rightrot(n,b));
    printf("\n\nAz eltolás eredmenye : %d\n",rightsh(n,b));
    bitminta(rightsh(n,b));
    printf("\n");

    return 0;
}
