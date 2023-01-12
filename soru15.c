#include<stdio.h>
int main( void )
{
	int sayi;

	
	do {
		printf( "Sayiyi giriniz: " );
		scanf("%d",&sayi);
		if( sayi>100000 || sayi<0 )
			printf("Girdiginiz sayi uygun degildir.\n"
				"0 ile 100000 arasýnda olmalýdýr.\n");
		else
			break;
	}while( 1 );

	printf( "%d sayýsý, '",sayi );

	
	switch( sayi/1000 ) {
		case 9: printf( "dokuzbin" ); 	break;
		case 8: printf( "sekizbin" ); 	break;
		case 7:	printf( "yedibin" ); 	break;
		case 6: printf( "altýbin" ); 	break;
		case 5: printf( "besbin" ); 	break;
		case 4:	printf( "dortbin" ); 	break;
		case 3: printf( "ucbin" ); 	break;
		case 2: printf( "ikibin" ); 	break;
		case 1: printf( "bin" ); 	break;
	}
		switch( (sayi/100)%10 ) {
		case 9: printf( "dokuzyuz" ); 	break;
		case 8: printf( "sekizyuz" ); 	break;
		case 7:	printf( "yediyuz" ); 	break;
		case 6: printf( "altýyüz" ); 	break;
		case 5: printf( "besyuz" ); 	break;
		case 4:	printf( "dortyuz" ); 	break;
		case 3: printf( "ucyuz" ); 	break;
		case 2: printf( "ikiyuz" ); 	break;
		case 1: printf( "yuz" ); 	break;
	}

	
	switch ( (sayi%100)/10 ) {	
		case 9: printf( "doksan" ); 	break;
		case 8: printf( "seksen" ); 	break;
		case 7: printf( "yetmis" ); 	break;
		case 6: printf( "altmýs" ); 	break;
		case 5: printf( "elli" ); 	break;
		case 4: printf( "kirk" ); 	break;
		case 3: printf( "otuz" ); 	break;
		case 2: printf( "yirmi" ); 	break;
		case 1: printf( "on" ); 	break;
	}

	
	switch ( (sayi%10) ) {	
		case 9: printf( "dokuz" ); 	break;
		case 8: printf( "sekiz" ); 	break;
		case 7: printf( "yedi" ); 	break;
		case 6: printf( "altý" ); 	break;
		case 5: printf( "bes" );	break;
		case 4: printf( "dort" ); 	break;
		case 3: printf( "uc" ); 	break;
		case 2: printf( "iki" );	break;
		case 1: printf( "bir" );	break;
	}

	
	if( sayi == 0 )
	
		printf( "sifir" );

	printf( " seklinde okunur.\n" );
	
	return 0;
	
}
	
  
