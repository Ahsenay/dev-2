#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a[100],i,n,top=0;
	float ort=0.0;
	printf("eleman sayisini giriniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("dizinin %d. degerini giriniz:\t",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("dizinin elemanlari sirasiyla:\t");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
		top+=a[i];
	}

	printf("\n");
	printf("Dizinin elemanlari toplami:%d\n",top);
	ort=(float)top/n;
	printf("Dizi elemanlari ortalamasi:%.2f\n",ort);
	printf(" B grubunda olanlar:\t");
	for(i=0;i<n;i++){
		if(a[i]>ort)
		printf("%d\t",a[i]);

	}
	printf("C grubunda olanlar:\t");
	for(i=0;i<n;i++){
		if(a[i]<ort)
		printf("%d\t",a[i]);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
