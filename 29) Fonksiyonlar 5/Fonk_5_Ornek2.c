#include<stdio.h>
#include<string.h> //karakter dizisinin uzunlu�unu bulmak i�in bir strlen() fonksiyonu var.  
                   //Onu kullanabilmek i�in string.h k�t�phanesini import ettim.

/*
klavyeden girilen bir karakter dizisinin tersini ekrana yazan kod yazd�m.
*/

void terscevir(char dizi[]){
	
	int i, uzunluk , gecici;
	
	uzunluk = strlen(dizi);
	
	
	for(i=0; i < uzunluk/2; i++){
		
		gecici = dizi[i];
		
		dizi[i] = dizi[uzunluk-1-i];
		
		dizi[uzunluk-1-i] = gecici;
		
	}
}


int main(){
	
	char text[200];
	
	printf("Bir karakter dizisi girin:");
	scanf("%s",&text);
	
	
	terscevir(text);
	printf("%s",text);
	
	
	return 0;
}
