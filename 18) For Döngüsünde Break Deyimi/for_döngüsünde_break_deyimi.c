#include<stdio.h>
#include <stdbool.h> //true veya false kullanmak i�in bu k�t�phanyi import etmem gerek.

int main(){
	
	 int toplam = 0;
	 	 
	 int sayi;
     int i;
	 
	 //for (i = 0 ; i< 10;  i = i/2){ // sonsuz d�ng�ye sokmak i�in i = i/2 yazd�m. C�nk� 1/2 integer degerde 0 olarak kabul edilir
	                                //b�ylece hi�bir zaman 10'dan b�y�k olmayacak say�.Sonsuza kadar gider. 
	    for (i = 0 ; true;  i++){
		
	 	
	 	printf("Sayi Giriniz (Cikmak icin -1'e basin):"); 
	 	scanf("%d",&sayi);
	 	   
	 	   if(sayi == -1){
	 	   	
	 	   	break;
	 	   	
			}
			 
			 toplam = toplam +sayi;
	 	
	 }
	 printf("%d",toplam);
	
	return 0;
}
