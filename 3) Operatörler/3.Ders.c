#include<stdio.h>
#include<conio.h>


int main()

{
    /*
     x + y -----> x ile y'yi toplar
     x - y -----> x den y'yi ��kar�r
     x * y -----> x ile y'yi �arpar
     x / y -----> x'i y'ye b�ler
     
     x % y -----> x'in y ile b�l�m�nden kalan� verir (mod alma i�lemide yap�labilir)
     
    -------------------------------------------------------------------------------------
    +x -----> x'i art� ile �arpar.
    -x -----> x'i eksi ile �arpar.(E�er x say�s� negatif ise pozitif yapar , pozitif ise negatif yapar)
    
    
    */
    
    int x = 5;
    printf("%d\n", x);
    //-----------------//
    
    
    printf("%d\n", 12 + 3);
    printf("%d\n", 12 - 3);
    printf("%d\n", 12 * 3);
    printf("%d\n", 12 / 3);
    //----------------------//
    
    
    printf("%d\n", 12 % 3); // bu i�lemin sonucu 0'd�r. ��nk� 12 say�s� 3'e tam b�l�n�r ve kalans�zd�r sonu�.
                          // o y�zden sonu� 0'd�r.
                          
     //----------------------//       
     
     
     printf("%f\n" , 12.1 + 3.2);   
     
     printf("%.1f\n" , 12.1 + 3.2);    //noktadan sonraki de�er , devreden ka� adet say�y� ekrana yazd�raca��n� belirler.
    
    getch();
    return 0;
    }
