#include<stdio.h>
struct ogrenci
{
	char adi[20];
	int yasi;
	float boyu;
	float kilo;
};

int main()
{
	struct ogrenci a;
	printf("Ogrencinin adini giriniz.");
	scanf("%s",a.adi);
	printf("\nOgrencinin yasini giriniz.");
	scanf("%d",&a.yasi);
	printf("\nOgrencinin boyunu giriniz.");
	scanf("%f",&a.boyu);
	printf("\nOgrencinin kilosunu giriniz.");
	scanf("%f",&a.kilo);
	
	printf("\nAdi:");
	puts(a.adi);
	printf("Yasi=%d\tBoyu=%.2f\tKilo=%.2f",a.yasi,a.boyu,a.kilo);
}
