#include<stdio.h>

void degerdegistir(int *a, int *b){  //fonk. parametre olarak pointer'lar� g�nderiyoruz. adresler �zerindeki de�erler ile i�lem yapabiliyoruz.
	
	int gecici = *a;
	
	*a = *b;
	
	*b = gecici;
	
	printf("a: %d b: %d\n",*a,*b);
}


int main(){
	
	int x = 5;
	int y = 10;
	
	
	degerdegistir(&x,&y);  // fonk. parametresi olarak x ve y nin adreslerini g�nderiyoruz.
	
	printf("x: %d y: %d\n",x,y);
	
	//BU DURUMA "Call By Referance" ad� verilir. 
	
	
	
	return 0;
}
