#include<stdio.h>
/*

Sadece karakter dizilerinde ge�erli bir olay vard�r. yazd���m�z dizinin sonuna "\0" ekler ve dizinin bitti�ini kendine anlat�r.
bizde bunu kullanarak karakter dizisinin uzunlu�unu alabiliriz. ��nk� uzunluk bilgisi kendi i�inde vard�r. 

*/

int uzunlukdon(char name[]){
	
	int uzunluk= 0;
	int i;
	
	for(i = 0; name[i] != '\0'; i++){
		
		uzunluk++;
	}
	
	
	return uzunluk;
}

	



int main(){
	
	char isim[]= "Ali";
	
	printf("%d",uzunlukdon(isim));
	
	return 0;
}
