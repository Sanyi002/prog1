#include <stdio.h>
#include <string.h>
#define MERET 1000


int main(int argc, char *argv[] )
{
 	FILE *pFile1, *pFile2;
	char pFile1_sor[MERET], pFile2_sor[MERET];
 	int i=0,megegyezik=0;
	
	if (argc > 3) {
    		printf("Maximum 2 fájlt adhatsz meg.\n");
   	}
	else {
  		pFile1 = fopen(argv[1],"r"); //read-el megnyitás
  		if (!pFile1){
      			printf("Nem sikerült megnyitni a %s fájlt\n", argv[1]);
    		}

  		pFile2 = fopen(argv[2],"r" ); //read-el megnyitás
  		if (!pFile2){
      			printf("Nem sikerült megnyitni a %s fájlt\n", argv[2]);
    		}


		while ((fgets(pFile1_sor, MERET, pFile1) != NULL) && (fgets(pFile2_sor, MERET, pFile2) != NULL)){ 
		//beolvassa a pFile1-et soronként a MERET erejeig pFile1_sor-ba.
   			if(strcmp (pFile1_sor, pFile2_sor) != 0 || strcmp (pFile2_sor, pFile1_sor) != 0){ //ha különbözik (-1;+1) -> !=0, és nem azonos (0).
    				printf( "Ahol a ket fajl kulonbozik:\nAz elso fajl azon sora: %s\nA masodik fajl azon sora: %s\n", pFile1_sor, pFile2_sor);
				megegyezik=0;	
				break;
			}
			else if(strcmp (pFile1_sor, pFile2_sor) == 0 || strcmp (pFile2_sor, pFile1_sor) == 0){
				megegyezik=1;
			}	
		}
	}



if (megegyezik)
printf("A 2 fájl megegyezik\n");


fclose(pFile1);
fclose(pFile2); 


  return 0;
}




/*

//strcmp
// -1 ha az 1. kisebb mint a 2.
// 0 ha egyenlőek
// +1 ha az 1. nagyobb mint a 2.


for (i=0;i<3;i++)
printf("argc: %d, argv[%d]: %s\n",argc,i,argv[i]);
//argc, a darabszám, argv pedig 0-tól indexelve az argomentumok.

Kimenet: 
argc: 3, argv[0]: ./test
argc: 3, argv[1]: 1.txt
argc: 3, argv[2]: 2.txt

*/

