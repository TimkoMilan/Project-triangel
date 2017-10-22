#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

 int main(){
 srand(time(NULL));
 int i;
 int arr[N];
 printf(" Random number ");
 	for(i=0;i<N;i++){	//nahodne cisla
 		arr[i]=rand()%9989+10;
 		printf("%d ",arr[i]);
 	}
 int parne=0;			// parne - neparne
 	for(i=0;i<N;i++){
	 if(arr[i]%2==0){
	 		parne++;
	 }
	 }
	 printf("\n Parne: %d ",parne);
	 printf("\n Neparne %d",N-parne);
int two=0;
int three=0;
int four=0;
	for(i=0;i<N;i++)	 
		if(arr[i]<100){
			two++;
		}
		else if(arr[i]>99 && arr[i]<1000){
			three++;
		}
		else if(arr[i]>1000 && arr[i]<10000){
			four++;
		}
	 printf("\n Two: %d \n Three: %d \n Four: %d",two,three,four);
int max; 				//max
	max=arr[0];
	for(i=1;i<N;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("\n Max: %d",max);	
int min; 				//min
	min=arr[0];
	for(i=1;i<N;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("\n Min: %d",min);
	
	printf("\n reverse"); //reverse
	for(i=N-1;i>=0;i--){
		printf(" %d ",arr[i]);
	}	
	int seven;
	for(i=0;i<N;i++){
		if(arr[i]%7==0){
			seven++;
		}
	}
	printf("\n Delitelne 7 is :%d",seven);
	
	int palindrom4=0;
	int a,b,c,d;
	for(i=0;i<N;i++){
		a=arr[i]%10;
		b=(arr[i] / 10)%10;
		c=(arr[i] / 100)%10;
		d=arr[i] / 1000;
		if(a==d && c==b){
			palindrom4++;
		}
	}
	printf("\n Palindrom4: %d ",palindrom4);
	int palindrom3=0;
	for(i=0;i<N;i++){
		if(arr[i]<1000 && arr[i]>100){
		
		a=arr[i]%10;
		b=(arr[i] / 10)%10;
		c=(arr[i] / 100)%10;
		if(a==b){
			palindrom3++;
		}	
		}
	}
	printf("\n Palindrom 3: %d",palindrom3);
	int palindrom2=0;
	for(i=0;i<N;i++){
		if(arr[i]<100 && arr[i]>10){
		
		a=arr[i]%10;
		b=(arr[i] / 10)%10;
		if(a==b){
			palindrom2++;
		}	
		}
	}
	printf("\n Palindrom 2: %d",palindrom2);
}
	 
	 
	 
