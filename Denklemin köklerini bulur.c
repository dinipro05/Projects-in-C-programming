#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	float kok1,kok2,I;
	float diskrimant;
	
	printf("(aX^2+bX+c) seklindeki ikinci dereceden denklemin a,b,c katsayilarini giriniz");
	scanf("%f%f%f",&a,&b,&c);
	diskrimant=((b*b)-(4*a*c));
	if(diskrimant>00)
	{
		kok1=(-b+sqrt(diskrimant))/(2*a);
		kok2=(-b-sqrt(diskrimant))/(2*a);
		printf("2 tane birbirinden farklý kkok vardir");
	}
	else if(diskrimant==0)
	{
		kok1=kok2=-b/2*a;
		printf("Birbirlerine esit 2 kök vardir");
	}		
	else
		printf("Kok yoktur");
}
