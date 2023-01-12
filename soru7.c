
#include <stdio.h>
#include <stdlib.h>
int main()
{
 char metin[100];
 int sayac=0,bayrak=1;
 printf("Metin giriniz:");
 gets(metin);
 while(metin[sayac] != 0)
 {
 if(bayrak)
 {
 if(metin[sayac] >= 'a' && metin[sayac]<='z')
 metin[sayac] -= 32;
 bayrak = 0;
 }
 else
 {
 if(metin[sayac] >= 'A' && metin[sayac]<='Z')
 metin[sayac] += 32;
 }
 if(metin[sayac] == ' ' || metin[sayac] == '.')
 bayrak=1;
 sayac++;
 }
 printf("%s", metin);
 return 0;
}
