#include <stdio.h>

int main(){
	char ay[12];
	int i;
	
	for(i=0;i<12;i++);
	{
	printf("Sayi giriniz:");
	scanf("%d",&i);
    if(i==1) 
		printf("Ocak ayidir");
	
	if(i==2)
		printf("subat ayidir");
		
	if(i==3)
		printf("mart ayidir");
	if(i==4)
		printf("nisan ayidir");
	if(i==5)
		printf("mayis ayidir");
	if(i==6)
		printf("haziran ayidir");
	if(i==7)
		printf("temmuz ayidir");
	if(i==8)
		printf("agustos ayidir");
	if(i==9)
		printf("eylul ayidir");
	if(i==10)
		printf("ekim ayidir");
	if(i==11)
		printf("kasim ayidir");
	if(i==12)
		printf("aralik ayidir");
}

   return 0;
   	
}
