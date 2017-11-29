#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	char original;
	char dec;
}crypt;
int main(){
	crypt crypts[200];
	FILE *f=fopen("codeTable.txt","r");
	if(f==NULL){
		printf("ERROR");
		return 1;
	}
	FILE *fr=fopen("secretCode.txt","r");
	if(f==NULL){
		printf("ERROR");
		return 1;
	}
	int a=0; 
	int x,y;
	while( fscanf(f,"%c%c%c%c",&crypts[a].dec,&x,&crypts[a].original,&y)!=EOF){
		a++;
	}
	fclose(f);
	 int i=0;
	 int j=0;
	 int k=0;
	 char z;
	 char text [2000];
	 for(j=0;j<1626;j++) {
		fscanf(fr, "%c", &text[j]);
		z=text[j];
		
			if(islower(z)){
				for(k=0;k<a;k++){
				z=toupper(z);
				if(z==crypts[k].original){
					z=crypts[k].dec;
					printf("%c",tolower(z));
					break;
			}
			}
				} 
			else if(isupper(z)){
				for(k=0;k<a;k++){
				if(z==crypts[k].original){
					z=crypts[k].dec;
					printf("%c",z);
					break;
			}
			}
				} 	
			else {
				printf("%c",z);
			}		
}
}
