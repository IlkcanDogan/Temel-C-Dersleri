#include<stdio.h>



//bool veri tipi True veya False de�erini al�r ancak bool a=true gibi bir atama yap�lam�yor.
//ayn� zamanda 0'dan b�y�k say�lar (1,26,8951...) gibi say�lar True de�erini al�r.
//0 say�s� false de�erini al�r.
/*

   if(123){
   
   //true de�erini al�r ve if blo�una girip i�lem yapar
   
   }




*/
int main(){
	/*
	
	a < b -----> a b'den k���k. 
	a > b -----> a b'den b�y�k
	a <= b ----> a k���k e�it b.
	a >= b ----> a b�y�k e�it b.
	a == b ----> a e�itir b.
	a != b ----> normalde a b'ye e�it de�il ise False de�eri d�nmesi gerekir ancak ! i�areti ��kan de�eri tam tersine �evirir.
	
	------------------------------------------------------------------------------------------------------------------------------
	
	
	Mant�ksal Ba�la�lar: bir �ok mant�ksal ifadeyi i�lemi birbirine ba�layan ara�lard�r.  
	
	&& ----> mant�ksal "and" ('ve') ba�lac�d�r. true && true && false gibi bir ifadenin sonucu False ��kacakt�r. 
	E�er c�mle i�inde bir tane bile false de�eri varsa c�mle false olacakt�r.
	
	
	// ----> mant�ksal "or" ('ya da') ba�lac�d�r. true // true // false olan bir c�mle sonuc olarak true olacakt�r.
	��nk� c�mle de bir tane true olmas� yeterlidir.
	
	! ----> mant�ksal "not" ('de�ili') ba�lac�d�r. true olan ifadeyi False yapar. false olan ifadeyi True yapar.
	
    ------------------------------------------------------------------------------------------------------------------------------
    
    �artl� C�mleler
    
    a = x > y ? x : y; //a k���kt�r b ise(?---->ise i�areti) de�er x olsun. De�il ise y olsun demektir bu c�mle.
    
    
	
	*/
	
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	
	a = b < c ? b : c;
	
	printf("%d", a);
	
	
	
	
	
	
	return 0;
}
