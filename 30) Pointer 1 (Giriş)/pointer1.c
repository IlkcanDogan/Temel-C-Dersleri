#include<stdio.h>


int main(){
	
	int i = 5;
	
	int *p = &i;
	
	printf("%u\n",p);
	
	printf("%d",*p);
	
	// & operat�r� de�ikenin adres bilgisini veriyor.
	// * operat�r� adresteki de�eri verir.
	
	return 0;
}
