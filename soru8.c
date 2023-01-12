#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



int main()
 {
 	char a[250] ;
 	int i=0;
 	printf("Buyuk harfli cumle giriniz:");
 	gets(a);
 	
	 
 	while(a[i]!='\0'){
	if(i%2==0){ 
 	a[i]+=32;
 	printf("%c",a[i]);
 	i++;
 }
    else if(i%2==1){
    	printf("%c",a[i]);
    	i++;
	}
}
	
	return 0;
}
