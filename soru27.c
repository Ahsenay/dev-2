#include <stdio.h>
#include <stdlib.h>
int KarakterSay(char metin[])
{
 int i=0;
 while(metin[i] != 0)
 i++;
 return i;
}
void main()
{
 char metin[100];
 int sayac=0;
 printf("Metin giriniz:");
 gets(metin);
 int karakterSayisi = KarakterSay(metin);
 for(sayac=karakterSayisi-1; sayac>=0; sayac--)
 putchar(metin[sayac]);
}
