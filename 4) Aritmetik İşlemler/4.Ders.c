#include<stdio.h>
#include<conio.h>

int main()

{
    
    /*
     --------------------------------------------------------------------------------------------
    
    -x , x+y*z , (x/7)*y , (a % b) - (x*a+1) , 3+4*7 bu gibi ifadeler birer aritmetik i�lemdir.
    
    ----------------------------------------------------------------------------------------------
    
    ��lem S�ras�;
          Tekli operat�rler : (+) (-) (-x,+x) 1.�nceli�e sahipler.Kendi aralar�nda sa�dan sola i�lem g�r�rler.
          �kili operat�rler : * , / , % 2.�nceli�e sahipler.Kendi aralar�nda soldan sa�a i�lem g�r�rler.
          �kili operat�rler : + , - 3.�nceli�e sahipler.Kendi aralar�nda soldan sa�a i�lem g�r�rler.
          
          D�PNOT: �nce parantez i�lerindeki i�lemler yap�l�r.
          
    ---------------------------------------------------------------------------------------------
*/
    
    
    
    
    printf("%d\n",2-3+4);
    printf("%d\n",2*3-4);
    printf("%d\n",2-3/4);
    
    printf("%d\n",2+3%4);
    
    printf("%d\n",2/3*4);
    printf("%d\n",2%3/4);
    printf("%d\n",-2+3);
    printf("%d\n",2*-3);
    printf("%d\n",-2*-3);
    
    printf("%d\n",(2+3)%4);
    
    
    getch();
    return 0;
    }
