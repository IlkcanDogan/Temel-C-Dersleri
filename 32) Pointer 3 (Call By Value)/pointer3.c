#include<stdio.h>

void yerdegistir(int a, int b){  //a ve b de�i�kenleri fonksiyon �al��t��� s�re i�erisinde bellekte var olurlar
                                 // fonksiyon bitti�inde bellekten yok olurlar.a ve b local(yerel de�i�kenlerdir.)
	
	int gecici;
	
	
	gecici = a;
	
	a = b;
	
	b = gecici;                       
	
	printf("a: %d  b: %d\n",a,b);
	
}

 //BU DURUMA "Call By Value" ADI VER�L�R.

int main(){
	
	int x = 5;
	int y = 10;
	
	yerdegistir(5,10); //burda x ve y'nin de�erleri de�i�ir ��nk� fonk. �a��rd�k ve parametre g�nderdik.
	
	printf("x: %d  y: %d" , x , y); //burda x ve y'nin de�erleri de�i�mez ��nk� fonksiyonu ca��rm�yoruz.
	
	
	return 0;
}
