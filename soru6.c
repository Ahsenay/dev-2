#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,n;
	int a[100];
	printf("Dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	
	printf("Dizinin %d. degerini giriniz:");
	scanf("%d",&a[i]);
}
   printf("dizinin elemanlari sirasiyla:\t");
   for(i=0;i<n;i++) {
   	printf("%d\t",a[i]);
   	if(a[i]%2==0) 
   		printf("0 indisindeki gruptadir:%d\n",a[i]);
	
	if(a[i]%2==1)
	   printf("1 indisindeki gruptadir:%d\n",a[i]);   
   }
   
	return 0;
}
