#include<stdio.h>

int main(){
	
	int i;
	int toplam = 0;
	
	while(i <= 10){
		
		if(i % 2 == 1){
		 i++;	  //  i++; buraya yazd���m zaman sonsuz d�ng�ye girmez.
			continue;
		}
	     toplam += i;
	     i++; // i++; buraya yazarsam sonsuz d�ng�ye girer ve ekrana bi�ey yazmaz.
}
   printf("%d",toplam);	
	
	
	
	
	return 0;
}
