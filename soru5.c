#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,n,a[100],b[100],reva[n];
	printf("eleman sayisini giriniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Dizinin %d.degerini giriniz:\t",i+1);
		scanf("%d",&a[i]);
	}
	printf("Dizinin elemanlari sirasiyla:\t");
	for(i=0;i<n;i++){
	printf("%d\t",a[i]);
		
	}
	for(i=n-1;i>=0;i--){
		reva[i]= -a[i];
	    printf("%d\t",reva[i]);}
	return 0;
}
