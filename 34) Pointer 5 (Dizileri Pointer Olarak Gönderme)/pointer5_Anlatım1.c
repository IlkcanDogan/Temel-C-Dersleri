#include<stdio.h>


int main(){
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *p = sayilar; //  int *p = sayilar; da yazabiliriz. �lk ba�lang�c indexini alabilmek i�in.
	
/*	
	printf("%u\n",p);
	printf("%u\n",p+1); // p+1 yazd���m zaman adresin 4 fazlas�n� verir ��nk� bellekte her kutucuk 4 byte't�r. 4 fazlas�n�n ba�lang�c adresini verir.
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	printf("%u\n",p+4);
	
*/

      printf("%d\n",*p);	
      printf("%d\n",*(p+1));
      printf("%d\n",*(p+2));
      printf("%d\n",*(p+3));
      printf("%d\n",*(p+4));
	

	printf("\n\n\n"); // ��kt�lar kar��mas�n diye 3 sat�r a�a��ya atlad�m.
	
	
		// *(p+1)  ---------------> p[1]  ikiside ayn�d�r ve offset ad� verilir. Assembly de offset kavram� �nemli burda �nemli de�il.
	
	  printf("%d\n",p[0]);	
      printf("%d\n",p[1]);
      printf("%d\n",p[2]);
      printf("%d\n",p[3]);
      printf("%d\n",p[4]);
	
	
	return 0;
}
