#include <stdio.h>
#include <stdlib.h>

// findNum adýnda bir fonksiyon oluþturduk. fonksiyonun içine parametrelerini verdik. num1, num2 ve iþlemin kaç kere yapýldýðýný tutan bir sayaç oluþturduk.

int findNum (int num1, int num2, int *sayac) {  

        (*sayac)++;  // her iþleme girdiðinde sayacý 1 arttýrdýk yapýlan iþlem sayýsýný bulmak için. 

        if(num1 >= num2) {  //num1 num2 den büyük veya eþitse yapýlmasý gereken iþlemler için if koþulu oluþturduk.
        
            if(num1 == num2) { // num1 num2 ye eþit ise çýkarma sonucu direkt sýfýr çýkacaktýr.bu durumu belirttik ve sýfýr döndürdük.
                return 0;
            }
               
			printf("%d %d \n",num1-num2,num2); // yapýlan iþlemlerin gözükmesi için ekrana yazdýrdým.
			
            findNum(num1-num2, num2,sayac); // fonksiyonun kendini tekrar etmesi gerektiði için rekürsif fonksiyon yaptýk ve içine yeni oluþan  parametrelerini yazdýk.
			// num1>num2 den ise  num1 den num2 yi çýkardýk ve sonucu num1e eþitledik. num2 ayný kaldý. 
			
 
        }
        else if(num1 < num2) { // eðer num2 num1 den büyük ise  
            
			printf("%d %d \n",num1,num2-num1); // yapýlan iþlemlerin gözükmesi için ekrana yazdýrdým.
			
            findNum(num1, num2-num1,sayac); // yine rekürsif olarak tanýmladýk. num1 ayný kaldý ve çýkartma sonucu elde edilen sonucu num2 ye atadýk.
           
        }
        return 0;
}

int main(int argc, char *argv[]) {

    int num1;  
    int num2;
    int sayac = 0;  // sayac deðerini 0 a eþitledik.
    
    printf("num1 degeri giriniz: \n"); // kullanýcýdan num1 deðerini aldým.
    scanf("%d",&num1);
	printf("num2 degeri giriniz: \n"); // kullanýcýdan num2 deðerini aldým.
    scanf("%d",&num2);
    
	printf("\n%d %d \n",num1,num2);  //aldýðým num1 ve num2 deðerlerini ekrana yazdýrdým.

    findNum(num1,num2, &sayac); // yukarýda tanýmladýðýmýz findNum fonksiyonunu çaðýrdýk.
    
    printf("\n0'a ulasmak icin gereken islem sayisi: %d",sayac); // kaç kere çýkarma iþlemi yapýldýðýnda num1 veya num2 nin 0'a eþit olacaðýný ekrana yazdýrdýk.

    return 0;
}




