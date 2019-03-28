#include<stdio.h>

int main(){
	
	//Tek yorum sat�r�. Tek satirli yorumlar i�in derleyici (Compiler) g�rmezden gelir.
	
	/*
	   
	   
	   
	   
	   
	    �oklu yorum sat�r�.
	*/
	
	/*
	DE���KENLER
	Temel De�i�kenlerimiz int,float,double,char,short,long
	
	CHAR VER�T�P�: 1 byte(8 bit) 0 dan 255(2^8) e kadar de�er alabilir.Her bir de�er ASCII tablosundaki
	de�ere e�ittir.
	
	�NT VER�T�P� (tamsay�): 4byte(32 bit) -2^16 dan 2^16 kadar de�er al�r. 2,32,45 gibi de�erler int de�erlerdir.
	
	SHORT VER�T�P�(int short) -2byte (16 bit) den  2^8 kadar de�er al�r.int ile ayn�d�r. sadece alacag� de�erler arkl�d�r. k���k say�lar� al�r.
	
	LONG VER�T�P�(long int): -8byte (64 bit) -2^32 den  2^32 kadar de�er al�r. int ile ayn�d�r. �ok b�y�k de�erler alabilir. 548664165156 gbi.
	
	FLOAT VER�T�P�: kesirli say�lar i�in kullan�l�r. 2.4 -- 6.5 -- 4.2 gibi kesirli de�erler al�r.
	DOUBLE VERT�P�: float ile ayn�d�r. sadece alaca�� de�erler daha b�y�kt�r. 4.6895671564 -- 3.987945613489 gibi.

	*/
	
	/*
	De�i�ken tan�mlama
	Veritipi de�i�ken_ad�;
	

	
	*/
	
	/*
	FORMAT BEL�RLEY�C�LER
	
	%d ---> int de�erler i�in kullan�l�r. 
	int sayi=3;
	int sayi2 =  4;
	printf("sayi1=3 %d",sayi,sayi2);
	
	
	%f ---> float ve double de�erler i�in kullan�l�r.
	float sayi= 4.2;
	printf("%f",sayi);
	
	double sayi2= 4.5498698;
	printf("%f",sayi2);
	
	
	%c ---> karakterler i�in kullan�l�r.
	char c1 = 'a';   
	printf("%c",c1);
	printf("%d",c1); ASCII tablosundaki de�eri ekrana basar.
	
	
	%s ---> karakter dizileri i�in kullan�l�r.("Cprogramlama")
	printf("%s","Cprogramlama");
	
	*/
	
	
	int a1=42;
	char b1=66;
	char b2='B';
	float c1=4.2;
	double d1=2.21;
	
	printf("%d %c %d %f %f %s\n",a1,b1,b2,c1,d1,"C Programlama");
	
	
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	

	return 0;
}
