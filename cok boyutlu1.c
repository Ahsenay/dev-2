#include <stdio.h>




 main() {
 
 int A[10][10],i,n,j,k,a,b,c,d,sayac=0;
 printf("Lutfen satir ve sutun sinirini giriniz\n");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 for(j=0;j<n;j++){
 	printf("A[%d][%d]",i,j);
 }	
 }
 printf("Olusan matris\n");
 for(i=0;i<n;i++){
 	for(j=0;j<n;j++){
 		printf("%d",A[i][j]);
	 }
 	printf("\n");
 }
 while(sayac<n+1){
 	for(i=0;i<n;i++){
 		for(j=0;j<n;j++){
 			if(i+1==n){
			 }
			 else if(A[i+1][j]>A[i][j]){
			 	b=A[i][j];
			 	A[i][j]=A[i+1][j];
			 	A[i+1][j]=b;
			 }
		 }
	 }
	 sayac++;
 }
 
 printf("Olusan matris\n");
 for(i=0;i<n;i++){
 	for(j=0;j<n;j++){
 		printf("%d\n",A[i][j]);
	 }
	 printf("\n");
 }
 
}
