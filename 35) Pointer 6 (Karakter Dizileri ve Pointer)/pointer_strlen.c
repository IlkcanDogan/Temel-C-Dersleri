#include<stdio.h>
#include<string.h>   // strlen() fonksiyonunun tan�ml� oldu�u k�t�phane.
 
 // bu programda kendi strlen() fonksiyonumu yazd�m.
 
  

int benimstrlen(char *p){
	
	int uzunluk =0;
	int i = 0;
	
	for(; p[i] != '\0'; i++ ){
		
		uzunluk++;
		
	}
	
	return uzunluk;
	
	
	
}



int main(){
	

	char yazi[] = "tura";  // RAM �zerinde yerle�me durumu: yukardan a�a�� yerle�ir ve sonuna '\0' karakteri yani "null" koyar.Dizinin bitti�ini anlamak i�in.
	
    printf("hazir fonksiyon: %d\n",strlen(yazi));
	
    printf("benim yazdigim fonksiyon: %d\n",benimstrlen(yazi));
	
	
	
	
	return 0;
}
