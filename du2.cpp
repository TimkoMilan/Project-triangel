#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	int y;
	int z;
	
	printf("Zadaj stranu x: ");
	scanf("%d",&x);
	printf("Zadaj stranu y: ");
	scanf("%d",&y);
	printf("Zadaj stranu z: ");
	scanf("%d",&z);
	
	if(x+y>z && z+y>x && z+x>y)
	{
		if(x==sqrt(y*y-z*z) || y==sqrt(z*z-x*x) || z==sqrt(x*x+y*y))
		{
			printf("da sa zostrojit");
		}
		else
		{
			printf("neda sa ");
		}
	}
}
