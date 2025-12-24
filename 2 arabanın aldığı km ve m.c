#include<stdio.h>
struct yol
{
	float km;
	float m;
	float toplam;
}a1,a2;

int main()
{
	printf("Birinci aracin kac km de oldugunu yaziniz");
	scanf("%f",a1.km);
	printf("Birinci aracin ne kadar yol gidecdgini m cinsinden yaziniz");
	scanf("%f",a1.m);
	printf("Ikinci aracin kac km de oldugunu yaziniz");
	scanf("%f",a2.km);
	printf("Ikinci aracin ne kadar yol gidecdgini m cinsinden yaziniz");
	scanf("%f",a2.m);	
}
