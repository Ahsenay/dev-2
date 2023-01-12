#include<stdio.h>
#include <string.h>

int main()
{
	char a[100];
	char b[100];
	int i,j=0,k=0;
	int sayac=0;
	printf("Bir kelime giriniz\n");
	gets(a);
	
for(i=0;a[i]!='\0';i++){
	sayac ++;
}
printf("%d\n",sayac);
for(i=0;i<sayac;i++){
  while(k<2){
  	b[j]=a[i];
  	j++;
  	k++;
  }
  k=0;	
}
printf("%s",b);
	return 0;
}
