#include<stdio.h>

int main(){
	
	 /*
	    3'e 5'lik bir matris ve s�tunlar�n toplam�n� yazan kod olu�turdum.
	     
	     1 2 3 4 5
	     6 7 8 9 10
	     11 12 13 14 15
	     
	 
	 */
	
	int matris[3][5];
	int i , j;
	int toplam= 0;
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j< 5; j++){
			scanf("%d",&matris[i][j]); //scanf("%d "); scanf fonk. bo�luk b�rakmak hata yarat�yor. 
		}
	}
	
	for(j= 0; j< 5; j++){
		for(i=0; i<3; i++){
			toplam += matris[i][j];
		}
		 	printf("%d ", toplam);
		 	toplam = 0;
	}

	return 0;
}
