#include<stdio.h>
#include<string.h> 

char *dondur(char *p , int index){    //d�nd�r adl� fonksiyonum.
	
	int uzunluk = strlen(p);
    
    
    if(index > uzunluk){
    	
    	return NULL;
	}
	else {
	    
	    return p + index; //dizinin istedi�imiz indexten sonras�n� d�nd�r�r.
	
	}
    
}


int main(){
	
/*	int *p = NULL; // null yerine 0(s�f�r) yazsamda olurdu. e�er bir adres vermezsem RAM �zerinde herhangi bir yeri g�sterir.
	               // herhangi bir yeri g�sterdi�inde i�letim sis. verilerini g�sterir ve g�venlik sorunu olur.Bu y�zden null kullanmam laz�m.
	
	printf("%d",p);
	
*/
	char dizi[] = "yazilim";
	
	char *p = dondur(dizi,2); //parametreler dizi ad� ve istedi�imiz indexten ba�lamas� i�in say�.
	
	
	if(p == NULL){
		
		printf("Pointer Null");
		
		
	}
	
	else{
		
		printf("%s",p);
	}
	
	
	return 0;
}
