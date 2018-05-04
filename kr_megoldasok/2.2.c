#include <stdio.h>
#include <math.h>

int htoi(char s[])
{
int i,seged,j;
long long int eredmeny=0;
for(i=0;s[i];i++)
	;
i--;

for(j=0;s[j];j++)
{
	int h=1;
	if(s[j]>=65&&s[j]<=70)
		{
			seged=s[j]-55;
				int t;
					for(t=0;t<i;t++) h=h*16;
			eredmeny+=(seged*h);
		}
	else if(s[j]>=97&&s[j]<=102)
		{
			seged=s[j]-87;
				int t;
					for(t=0;t<i;t++) h=h*16;
			eredmeny+=(seged*h);
		}
	else if(s[j]>=48&&s[j]<=57)
		{
			seged=s[j]-48;
				int t;
					for(t=0;t<i;t++) h=h*16;
			eredmeny+=(seged*h);
		}
i--;
}
return eredmeny;
}

int main(void)//csak teszteles vegett, a feladatban csak a fuggvenyrol van szo.
{
char s[6]="fCa12";

printf("%d\n",htoi(s));


return 0;
}


