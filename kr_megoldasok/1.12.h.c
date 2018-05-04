#include <stdio.h>

#define max 10

int main(void)
{
  int c;
  int szoban = 0;
  long hosszu[max + 1];
  int szohossz = 0;
	int elsobetu = 1;
  long ertek = 0;
  long maxertek = 0;
  int id = 0;
	int kesz = 0;

  for(id = 0; id <= max; ++id)
  {
    hosszu[id] = 0;
  }

  while(kesz == 0)
  {
    c = getchar();
    if(c == ' ' || c == '\t' || c == '\n' || c == EOF)
		/*ha a beírt/beolvasott karakterben van whitespace, vagy szóvége*/
    {
      if(szoban == 0) /*és ha még nem vagyunk benne a szóban*/
      {
        elsobetu = 0; /*az elejére ugrunk*/
        szoban = 1; /*és elkezdjük a szót*/

        if(szohossz <= max) 
        {
          if(szohossz > 0)
          {
            ertek = ++hosszu[szohossz - 1];
						/*az ertek változóban letároljuk a hosszúságát*/
            if(ertek > maxertek) 
            {
              maxertek = ertek;
            }
          }
        }
        else
        {
          ertek = ++hosszu[max];
          if(ertek > maxertek) 
          {
            maxertek = ertek;
          }
        }
      }
      if(c == EOF)
      {
        kesz = 1; /*kilép*/
      }
    }
    else /*ha a beírt/beolvasott karakterben nincs ws, vagy EOF*/
    {
      if(szoban == 1 || elsobetu == 1) 
			/*és a szóban vagyunk, vagy az első betűjénél*/
      { /*kinullázzuk őket*/
        szohossz = 0;
        elsobetu = 0;
        szoban = 0;
      }
      ++szohossz; /*és növeljük a szóhosszt*/
    }
  }
	//A gráf megrajzolása	
	printf("       ");	
	for(id = 0; id <= max; ++id)
  { /*a karakterszám értékeinek elválasztása*/
    printf("---");
  }
  printf("\n");
	printf("       ");	
	for(id = 0; id < max; ++id)
  { /*a karakterszám értékei*/
    printf("%2d ", id + 1);
  }	
  printf(">%d\n      +", max);
  for(id = 0; id <= max; ++id)
  { /*a karakterszám értékeinek elválasztása*/
    printf("---");
  }
  printf("\n");
  for(ertek = 1; ertek <= maxertek; ++ertek)
	/*a magassága kerül a legkülső for-ba, a legnagyobbtól 0-ig, egyre csökkentjük*/
  {
    printf("%4ld |  ", ertek); 
		/*négy szélességgel amennyi van a szószámból*/
    for(id = 0; id <= max; ++id)
		/*ide kerül az oszlopok kitültése*/
    {
      if(hosszu[id] >= ertek) /*ha a hossz nagyobb, mint az érték*/
      {
        printf("#  "); /*igaz*/
      }
      else
      {
        printf("   "); /*ha nem, üresen marad*/
      }
    }
    printf("\n");
  }
}
