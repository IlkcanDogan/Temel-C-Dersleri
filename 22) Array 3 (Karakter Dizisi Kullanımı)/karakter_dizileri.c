#include<stdio.h>

int main(){
	  
	  char isim[20];
	  
	printf("Isminizi Giriniz:");
	scanf("%s",isim); //karakter dizilerini kullan�c�dan al�rken ampersand "&" koymaya gerek yok.
	
	printf("Isminiz: %s",isim);  
	
	
	
	// NOT: scanf() komutu bo�luk ile kar��la�ana kadar girilen de�eri �eker. Arada bo�luk varsa bo�lu�a kadar olan k�sm� g�r�r yani.
	
	
	
	
return 0;
}
