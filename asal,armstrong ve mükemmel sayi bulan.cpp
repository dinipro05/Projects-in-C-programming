#include<stdio.h>
#include<math.h>
int Sayiasalmi(int sayi);
int sayiarmstrongmu(int sayi);
int sayimukemmelmi(int sayi);

int main()
{
	int sayi;
	printf("Bir sayi giriniz");
	scanf("%d",&sayi);
	if(Sayiasalmi(sayi))
		printf("%d bir asal sayidir\n");
	else
		printf("%d bir asal sayi degildir\n");

	if(sayiarmstrongmu(sayi))
		printf("Sayi armstrong sayidir\n");
	else
		printf("Sayi armstrong sayi degildir\n");
		
	if(sayimukemmelmi(sayi))
		printf("Sayi mukemmel sayidir\n");
	else
		printf("Sayi mukemmel sayi degildir\n");
	return 0;
}

int Sayiasalmi(int sayi)
{
	int i;
	for(i=2;i<=sayi/2;i++)
	{
		if(sayi%i==0)
			return 0;
	}
	return 1;
}

int sayiarmstrongmu(int sayi)
{
	int sonbasamak,toplam=0,orijinalsayi,basamaksayisi;
	orijinalsayi=sayi;
	basamaksayisi=(int)log10(sayi)+1;
	while(sayi>0)
	{
		sonbasamak=sayi%10;
		toplam=toplam+round(pow(sonbasamak,basamaksayisi));
		sayi=sayi/10;
	}
	return (orijinalsayi==toplam);
}

int sayimukemmelmi(int sayi)
{
	int i,toplam=0,n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			toplam +=i;
	}
	return (sayi==toplam);
}
