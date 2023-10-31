#include <stdio.h>
main()
{
	int toplam=0,n,sayi,i;
	float ortalama;
	
	printf("kac adet sayi gireceksiniz?		");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
	printf("%d. sayiyi giriniz:	",i);
	scanf("%d",&sayi);
	toplam = toplam + sayi;
	
	
	
	}	
	
	ortalama = toplam/n;
	printf("girdiginiz sayilarin ortalamasi : %f",ortalama);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
