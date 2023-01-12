#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int KarakterSay(char metin[])
{
 int i=0;
 while(metin[i] != 0)
 i++;
 return i;
}
int uzunlukSay(char metin[], int baslangicKonumu)
{
 int i=0;
 while(metin[baslangicKonumu+i] != ' ' && metin[baslangicKonumu+i] != 0)
 {
 i++;
 }
 return i;
}
int main()
{
 char metin[100];
 int uzunluklar[10]={0},konum=0;
 int kelimeSayaci=0,i=0;
 char alfabe[]= {'a','b','c','d','e','x','w','z'};
 int sayilar[10]={0};
 printf("Metin Gir:");
 gets(metin);
 int karakterSayisi = KarakterSay(metin);
 while(konum < karakterSayisi)
 {
 int kelimeUzunluk=uzunlukSay(metin,konum);
 printf("%d \n",kelimeUzunluk);
 uzunluklar[kelimeSayaci] = kelimeUzunluk;
 konum+=kelimeUzunluk+1;
 kelimeSayaci++;
 }
 for(i=0;i<kelimeSayaci;i++)
 printf("%d. kelime %d harf \n",i,uzunluklar[i]);
 int maxUzunluk = INT_MIN;
 int maxSira;
 for(i=0;i<kelimeSayaci;i++)
 {
 if(uzunluklar[i] > maxUzunluk)
 {
 	maxUzunluk = uzunluklar[i];
 maxSira=i;
 }
 }
 printf("%d karakter ile en uzun kelime %d. kelimedir. \n",maxUzunluk,
maxSira);
 printf("En uzun kelime:");
 i=0;
 int tempSira = maxSira;
 while(metin[i] != 0)
 {
 if(metin[i] == ' ')
 tempSira--;
 if(tempSira== 0)
 {
 putchar(metin[i]);
 }
 i++;
 }
 return 0;
}
