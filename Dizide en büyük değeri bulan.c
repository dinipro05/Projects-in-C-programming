#include<stdio.h>
int main()
{
	int dizi[]={1,8,7,4,9};
	int enbuyukdeger=dizi[0];
	int konum=0;
	int indeks;
	int boyut = sizeof(dizi) / sizeof(dizi[0]);
	for(indeks=0; indeks<boyut;indeks++)
	{
		if(dizi[indeks]>enbuyukdeger)
		{
			enbuyukdeger=dizi[indeks];
			konum=indeks;
		}
	}
	printf("Dizinin en buyuk elemani: %d indeksli konumda bulunan %d degeridir",konum,enbuyukdeger);
	return 0;
}
