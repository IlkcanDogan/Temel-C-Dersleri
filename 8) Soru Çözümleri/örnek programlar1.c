#include<stdio.h>


int main()
{

     int a,b,c,d,e;
     float ort;
    printf("5 tane sayi giriniz:\n"); //her say� girdiginde enter'e basmas� gerekiyor.
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    ort = (a+ b+ c+ d+ e) / 5.0; //aritmatik ort. noktal� bir say� da ��kabilir.
    
    printf("girdiginiz sayilarin ortalamasi %.2f'dir.", ort); //noktadan sonraki 2 say�y� almak istedi�im i�in (%.2f) yazd�m.




          return 0;
}
