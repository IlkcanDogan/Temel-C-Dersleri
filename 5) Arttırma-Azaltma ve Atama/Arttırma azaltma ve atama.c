#include<stdio.h>


int main()
{
	/*
	
	int x = 4;               |
	int y = 5;               |
	                         |
	printf("x: %d\n", x++);  |
	printf("x: %d\n", ++x);  | ----------> ARTTIRMA VE AZALTMA i�LEMLER�
	
	printf("y: %d\n",y--);   | 
  	printf("y: %d\n",--y);   |
	
	*/
	
	
	
	
	/*
	int i = 5;              |
	printf("i:%d\n", i);    |
	
	                        |
	
	i = i + 1;              |<<<<<---------->>>> form�l-------->  (de�i�ken i�lem=ifade)
	printf("i:%d\n",i);     |
	
	                        |
	i *= +1;  //            |                  
	printf("i:%d\n",i);     |
	
	*/                   
	
	
	
	
	
	
	
	
	
	//�rnek Program Kodu
	
	int x=9;
	
	//x = x -1;
	//printf("x:%d\n",x);
	
	
	//x -=1;
	//printf("x:%d\n",x);
	
	//x %= 1;
	x *= x+3; //i�lem en sa�dan ba�l�yor.
	printf("x:%d\n",x);
	
	return 0;
}
