#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int sayi,basamaks; 
	float sonuc;
	printf("Bir sayi giriniz= "); 
	scanf("%d",&sayi); 
	basamaks=1; 
		sayi=sayi/10; 
		basamaks++; 

	
	printf("Basamak sayisi= %d",basamaks); 
   sonuc=sayi/basamaks;
   printf("\n");
   printf("Sayinin basamak sayisina bolumu:%2.f",sonuc);
    
    return 0;
}
