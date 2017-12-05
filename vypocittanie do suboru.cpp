#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int a;
	int b;
}nums;
int main(){
	nums num[200];
	FILE *f=fopen("number.txt","r");
	if(f==NULL){
		printf("ERROR 1");
		return 1;
	}
	FILE *fr=fopen("result.txt","w");
	if(f==NULL){
		printf("ERROR 2");
		return 1;
	}
	int x=0; 
	while( fscanf(f,"%d%d",&num[x].a,&num[x].b)!=EOF){
		fprintf(fr,"A=%d B=%d Obsah=%d Obvod=%d\n",num[x].a,num[x].b,num[x].a*num[x].b,(num[x].a)+(num[x].b));
		x++;		
	}
	fclose(f);
	fclose(fr);	
}
