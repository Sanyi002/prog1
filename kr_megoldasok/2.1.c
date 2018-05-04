#include <stdio.h>
#include <limits.h>

int main ()
{

printf("char merete: %d\n", CHAR_BIT);
printf("char merete min %d\n", CHAR_MIN);
printf("char merete maximum %d\n", CHAR_MAX);
printf("int merete min %d\n", INT_MIN);
printf("int merete max %d\n", INT_MAX);
printf("long merete min %ld\n", LONG_MIN);       
printf("long merete max %ld\n", LONG_MAX);       
printf("short merete min %d\n", SHRT_MIN);
printf("short merete max %d\n", SHRT_MAX);
printf("unsigned char merete %u\n", UCHAR_MAX); 
printf("unsigned long merete %lu\n", ULONG_MAX); 
printf("unsigned int merete %u\n", UINT_MAX);   
printf("unsigned short merete %u\n", USHRT_MAX); 

return 0;

}
