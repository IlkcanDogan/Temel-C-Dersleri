#include<stdio.h>


int main(){
	/*
	 int matris[3][3] = {{1,2,3}, {4,5,6},{7,8,9}}; // diziler s�f�rdan ba�lar. 
	 
	 printf("%d", matris[2][2]);
	 
	 */
	 
	 
	
	int matris[3][3];
	int i, j;
	////////////////////////////////////////////////////////////////////////////////
	for(i = 0; i < 3; i++){     
		
		for(j = 0; j<3; j++){
		                                  //for d�ng�s� i�inde scanf() kullanarak matrisin
		scanf("%d", &matris[i][j]);       //i�ini doldurdum.
		
		}
	
	}
	////////////////////////////////////////////////////////////////////////////////
	
	
	////////////////////////////////////////////////////////////////////////////////
	for(i = 0; i< 3; i++){
		
		   for(j = 0; j<3; j++){
		   	  printf("%d ",matris[i][j]);     //for d�ng�s� i�inde printf() kullanarak
		   }                                  //matrisi ekrana yazd�rd�m.
	          printf("\n");  
	     
	}
	    
	/////////////////////////////////////////////////////////////////////////////////
	
	return 0;
}
