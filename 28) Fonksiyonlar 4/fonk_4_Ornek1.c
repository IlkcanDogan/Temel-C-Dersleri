#include<stdio.h>

//fonk. array g�nderdim.



int carp(int matris[], int size){  //int size ad�nda bir parametre belirledim ��nk�
                                   // C dili dizi boyutunu anlam�yor. 
	
        int carpim = 1;
		
		int i = 0;
		
		
		for(; i < size; i++){
			  
			  carpim *= matris[i];
			  	
		}	
		
		return carpim;
}



int main(){
	
	int sayilar[5] = {1,2,3,4,5};
	
	  printf("%d",carp(sayilar,5));
	
	
	
	return 0;
}
