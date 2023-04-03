#include <stdio.h>
#include <stdlib.h>

// findNum ad�nda bir fonksiyon olu�turduk. fonksiyonun i�ine parametrelerini verdik. num1, num2 ve i�lemin ka� kere yap�ld���n� tutan bir saya� olu�turduk.

int findNum (int num1, int num2, int *sayac) {  

        (*sayac)++;  // her i�leme girdi�inde sayac� 1 artt�rd�k yap�lan i�lem say�s�n� bulmak i�in. 

        if(num1 >= num2) {  //num1 num2 den b�y�k veya e�itse yap�lmas� gereken i�lemler i�in if ko�ulu olu�turduk.
        
            if(num1 == num2) { // num1 num2 ye e�it ise ��karma sonucu direkt s�f�r ��kacakt�r.bu durumu belirttik ve s�f�r d�nd�rd�k.
                return 0;
            }
               
			printf("%d %d \n",num1-num2,num2); // yap�lan i�lemlerin g�z�kmesi i�in ekrana yazd�rd�m.
			
            findNum(num1-num2, num2,sayac); // fonksiyonun kendini tekrar etmesi gerekti�i i�in rek�rsif fonksiyon yapt�k ve i�ine yeni olu�an  parametrelerini yazd�k.
			// num1>num2 den ise  num1 den num2 yi ��kard�k ve sonucu num1e e�itledik. num2 ayn� kald�. 
			
 
        }
        else if(num1 < num2) { // e�er num2 num1 den b�y�k ise  
            
			printf("%d %d \n",num1,num2-num1); // yap�lan i�lemlerin g�z�kmesi i�in ekrana yazd�rd�m.
			
            findNum(num1, num2-num1,sayac); // yine rek�rsif olarak tan�mlad�k. num1 ayn� kald� ve ��kartma sonucu elde edilen sonucu num2 ye atad�k.
           
        }
        return 0;
}

int main(int argc, char *argv[]) {

    int num1;  
    int num2;
    int sayac = 0;  // sayac de�erini 0 a e�itledik.
    
    printf("num1 degeri giriniz: \n"); // kullan�c�dan num1 de�erini ald�m.
    scanf("%d",&num1);
	printf("num2 degeri giriniz: \n"); // kullan�c�dan num2 de�erini ald�m.
    scanf("%d",&num2);
    
	printf("\n%d %d \n",num1,num2);  //ald���m num1 ve num2 de�erlerini ekrana yazd�rd�m.

    findNum(num1,num2, &sayac); // yukar�da tan�mlad���m�z findNum fonksiyonunu �a��rd�k.
    
    printf("\n0'a ulasmak icin gereken islem sayisi: %d",sayac); // ka� kere ��karma i�lemi yap�ld���nda num1 veya num2 nin 0'a e�it olaca��n� ekrana yazd�rd�k.

    return 0;
}




