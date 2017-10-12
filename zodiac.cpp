#include<stdio.h>
int main()
{
	int m;
	int d;
	
	printf("Enter a number of month: ");
	scanf("%d",&m);
	if(m<=12){
	printf("Enter number of day: " );
	scanf("%d",&d);
	
	switch (m){
case 1:
		if(d>=1 && d<=20)
		{
			printf("Capricorn");
		}
		else if (d>=21 && d<=31)
		{
			printf("Aquarius");
		}
		else printf("Wrong input");
		
		break;
case 2:
		if(d>=1 && d<=19)
		{
			printf("Aquarius");
		}
		else if (d>=20 && d<=28)
		{
			printf("pisces");
		}
		else printf("Wrong input");
		
		break;
case 3:
		if(d>=1 && d<=21)
		{
			printf("Pisces");
		}
		else if (d>=21 && d<=31)
		{
			printf("Aries");
		}
		else printf("Wrong input");
		
		break;
case 4:
		if(d>=1 && d<=20)
		{
			printf("Aries");
		}
		else if (d>=21 && d<=30)
		{
			printf("Taurus");
		}
		else printf("Wrong input");
		
		break;
case 5:
		if(d>=1 && d<=20)
		{
			printf("Taurus");
		}
		else if (d>=21 && d<=30)
		{
			printf("Gemini");
		}
		else printf("Wrong input");
		
		break;
case 6:
		if(d>=1 && d<=20)
		{
			printf("Gemini");
		}
		else if (d>=21 && d<=30)
		{
			printf("Cancer");
		}
		else printf("Wrong input");
		
		break;
case 7:
		if(d>=1 && d<=21)
		{
			printf("Cancer");
		}
		else if (d>=22 && d<=31)
		{
			printf("Leo");
		}
		else printf("Wrong input");
		
		break;
case 8:
		if(d>=1 && d<=22)
		{
			printf("Leo");
		}
		else if (d>=23 && d<=31)
		{
			printf("Virgo");
		}
		else printf("Wrong input");
		
		break;
case 9:
		if(d>=1 && d<=22)
		{
			printf("Virgo");
		}
		else if (d>=23 && d<=30)
		{
			printf("Libra");
		}
		else printf("Wrong input");
		
		break;
case 10:
		if(d>=1 && d<=22)
		{
			printf("Libra");
		}
		else if (d>=23 && d<=31)
		{
			printf("Scorpion");
		}
		else printf("Wrong input");
		
		break;
case 11:
		if(d>=1 && d<=21)
		{
			printf("Scorpion");
		}
		else if (d>=22 && d<=30)
		{
			printf("Sagitarius");
		}
		else printf("Wrong input");
		
		break;																				
case 12:
		if(d>=1 && d<=21)
		{
			printf("Sagitarius");
		}
		else if (d>=22 && d<=31)
		{
			printf("Aquarius");
		}
		else printf("Wrong input");
		
		break;
}	
}
	else{
			printf("wrong input! ");
		}	
}


