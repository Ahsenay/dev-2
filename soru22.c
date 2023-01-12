
	#include <stdio.h>
#include <stdlib.h>
int KarakterSay(char metin[])
{
 int i=0;
 while(metin[i] != 0)
 i++;
 return i;
}
int main()
{
 int kelime;
 char metin[100];
 int kelimeSayaci=0,i;
 int sayilar[10]={0};
 printf("Metin Gir:");
 gets(metin);
 int karakterSayisi = KarakterSay(metin);
 for(i=0;i<karakterSayisi;i++)
 {
 if(metin[i] == ' ')
 {
 kelimeSayaci++;
 }
 else
 {
 sayilar[kelimeSayaci]++;
 }
 }
 for(i=0;i<=kelimeSayaci;i++)
 {
 printf("%d. kelime %d harf \n",i,sayilar[i]);
 }
 for(i=0;i<kelime;i++){
 	printf("%d",kelime);
 }
 return 0;
}

