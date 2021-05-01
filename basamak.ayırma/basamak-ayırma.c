#include <stdio.h>
//Klavyeden girilen sayıyı basamaklarına ayıran program

int main() {
	
	int i,sayi,gecici;
	int basamaksayisi = 1; 
	
// int operatörünün max değeri 2,147,483,647 dir.
	printf("En fazla 9 basamakli bir sayi giriniz : ");
	scanf("%d",&sayi);
	
    gecici = sayi;

//Sayının basamak sayısının bulunması
	
	while (gecici >= 10)
	{
		gecici = gecici / 10;
		basamaksayisi++;

	}
	
	int dizi[basamaksayisi];

	for(i = 0; i < basamaksayisi ;i++)
	{
		dizi[ basamaksayisi - (i+1) ] = sayi % 10; 	
	    sayi = sayi / 10;	   	
		
		
	} 
	 
for(i = 0 ; i < basamaksayisi ; i++)
{
	printf("%d ", dizi[i] );
}	

printf("\nSayi %d basamaklidir.", basamaksayisi);



//Örneğin sayımız 54912 olsun.
//birler basamağını bulmak için mod aldık ve dizinin son elemanı olarak atadık.  (54912(mod 10) = 2)
	 
//onlar basamağını bulmak için sayımızı 4 basamağa indirdik ve küsüratı attık. (54912 / 10 = 5491)
//onlar basamağını bulmak için mod aldık ve diziye atadık. (5491(mod 10) = 1)
	 
//yüzler basamağını bulmak için sayımızı 3 basamağa indirdik ve küsüratı attık. (5491 / 10 = 549)
//yüzler basamağını bulmak için mod aldık ve diziye atadık. (549(mod 10) = 9)
		
//binler basamağını bulmak için sayımızı 2 basamağa indirdik ve küsüratı attık. (549 / 10 = 54) 
//binler basamağını bulmak için mod aldık ve diziye atadık. (54(mod 10) = 4)
			
//on binler basamağını bulmak için sayımızı 1 basamağa indirdik ve küsüratı attık. (54 / 10 = 5)
//son olarakta sadece onbinler basamağı kalan sayımızı dizinin ilk elemanı olarak atadık.
        
	
}
