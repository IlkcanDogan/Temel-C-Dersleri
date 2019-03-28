#include<stdio.h>

char *gunismi(char *gundizisi[], int uzunluk , int hangigun){ //karakter dizisinin uzunluk de�eri i�inde olmad��� i�in uzunluk verisi g�nderdik.
	
	if(hangigun >= 1 && hangigun <=7){ // 1 ve 7. g�nlerin d���nda g�n istenmemesi i�in if ile kontrol ettim.
		
		return gundizisi[hangigun-1]; // girilen sayidan 1 ��kararak dizi indexine e�itliyor.
	}
	else{
		
		return NULL;
	}
	
}

int main(){
	
	
	char *gunler[] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"}; //index de�eri 0'dan ba�lar.
	
	//printf("%s",gunler[0]);
	
	char *p = gunismi(gunler,7,5);  // parametreler:dizi ad�,dizi uzunlu�u, istedi�imiz g�n.
	
	if(p == NULL){
		printf("Null"); //return NULL; d�nerse istedi�imiz �eyi yazd�yoruz.
	}
	else{
		printf("%s",p); //null de�er d�nmezse ekrana yazd�r�yor.
		
	}
	
	
	
	return 0;
}
