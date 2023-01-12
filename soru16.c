#include <stdio.h>

int main(){
	
   int ay,gun;
   printf("ay sayisi giriniz:");
   scanf("%d",&ay);
   
   printf("gun sayisi giriniz:");
   scanf("%d",&gun);
   
   if((ay == 12 && gun >= 12) || (ay ==1 && gun<=20) )
   
   printf("OGLAK BURCUSUN");
   
   if((ay == 9 && gun >= 22) || (ay == 10 && gun <= 23))
   printf("TERAZİ BURCUSUN");
   if ((ay == 1 && gun >= 21) || (ay == 2 && gun <= 19))
   printf("KOVA BURCUSUN");
   if ((ay == 2 && gun >= 20) || (ay == 3 && gun <= 20))
   printf("BALİK BURCUSUN");
   if ((ay == 3 && gun >= 21) || (ay == 4 && gun <= 20))
   printf("KOC BURCUSUN");
   if ((ay == 4 && gun >= 21) || (ay == 5 && gun <= 21))
   printf("BOGA BURCUSUN");
   if ((ay == 5 && gun >= 22) || (ay == 6 && gun <= 21))
   printf("İKİZLER BURCUSUN");
   if ((ay == 6 && gun >= 22) || (ay == 7 && gun <= 23))
   printf("YENGEC BURCUSUN");
   if ((ay == 7 && gun >= 24) || (ay == 8 && gun <= 23))
   printf("ASLAN BURCUSUN");
   if ((ay == 8 && gun >= 24) || (ay == 9 && gun <= 23))
   printf("BASAK BURCUSUN");
   if ((ay == 10 && gun >= 23) || (ay == 11 && gun <= 22))
   printf("AKREP BURCUSUN");
   if ((ay == 11 && gun >= 23) || (ay == 12 && gun <= 22))
   printf("YAY BURCUSUN");
   else if((ay!=12 && ay>12 && gun>30)) {
   	printf("GECERSİZ İSLEM");
   }
	return 0;	
}
