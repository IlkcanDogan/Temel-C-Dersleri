#include<stdio.h>


int main()


{
	int x = 4;
	float y= 4.2;
    double g = 5.33;
	
	printf("%d\n",x);
	printf("%f\n", y);
	printf("%f\n",g);
	
	printf("%d\n", x);
	printf("%d\n",(int)y);
	
	printf("%f\n", (float)x);
	printf("%d\n", (int)g);
	
	//float veritipini tekrardan float a �evirmenin bir anlam� yok. 
	//�rne�in printf("%f", (float)y); anlams�z olur ��nk� zaten float 
	
	
	//Derleyici default ayar�nda yani oto tip d�n��t�r�rken 
	//bellekte daha fazla yer kaplayan veritipine d�n��t�r�r sonucu.
	
	return  0;
}
