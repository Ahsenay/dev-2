#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
int sayi; 
int taban;
int taban2;
int ss;
int aa[100];
int j,k,l,m,b,c,a,x,y,sonuc; 
int i;
printf("gireceginiz sayi kaclik tabanindadir?:\n");
scanf("%d",&taban2);
printf("%d lik tabanindaki sayiyi giriniz:\n",taban2);
scanf("%d",&ss);
printf("girdiginiz sayiyi kaclik tabana cevirmek istersiniz:\n");
scanf("%d",&taban);
a=0;
k=0;
x=0;
j=0;
sayi=0;
sonuc=0;
for(i=0;i<100;i++){
 aa[i]=0;
 }
for(i=0;i<100;i++){
if(ss>=10){
 aa[i]=ss%10;
 ss=ss-aa[i];
 ss=ss/10;
}
else if(ss<10){
 aa[i]=ss;
 break;
 } 
 }
int kk=0;
for( i=0;i<100;i++){
 sonuc=sonuc+aa[kk]*pow(taban2,i);
 kk++;
 }
sayi=sonuc+0;
printf("%d",sayi);
for(i=0; i<100; i++) {
 if(sayi<pow(taban,i)&&sayi>0){
 i=i-1;
 for(x=0;x<100;x++){ 
 if(sayi>=pow(taban,i)){
 sayi=sayi-pow(taban,i);
 j=j+1;
 }
 else 
 { 
 break;
 }
 }
 a=a+j*pow(10,i);
 j=0;
 i=0;
 }
if(sayi==1){
 a++;
 }
if(sayi==0){
 break;
 }}
printf("\ngirdiginiz sayinin %d tabanindaki hali %d dir\n",taban,a);
getch();
return 0; }
