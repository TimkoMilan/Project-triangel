#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
 srand(time(NULL));
 char spz[6];
 int i;
 printf("KE-");
 			spz[0]=rand()%10+48;
 			spz[1]=rand()%10+48;
 		   	spz[2]=rand()%10+48;
 			spz[3]=rand()%26+65;
			spz[4]=rand()%26+65;
 	spz[5]='\0';
 	printf("%s",spz);
 			
}
