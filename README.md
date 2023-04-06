# sifir-bulana-kadar-say
Sıfırı Bulana Kadar say:
num1 ve num2 olmak üzere kullanıcı tarafından negatif olmayan iki tam sayı girilir.
girilen sayılardan num1 >= num2 ise num1'den  num2'yi yani büyükten küçüğü çıkarırız.
aksi takdirde num1'i num2'den çıkarırız. 
num1>=num2 ise .çıkarma sonucu yeni oluşan sayı değerini num1 e atarız num2 aynen kalır.
tam tersi ise yeni oluşan çıkarma değerini num2 ye atarız num1 eski değerinde kalır.
çıkarma işlemi num1 = 0 veya num2 = 0 olana kadar kendini çağırarak devam eder.
sıfıra ulaşıldığında ise 0 a ulaşmak için kaç kere işlem yapıldığını ve num1,num2 nin sırasıyla oluşan değerlerini ekrana yazdırır.

Örneğin, num1 = 12 ve num2 = 4 ise num1'den num2'yi çıkarıcaz, böylece num1 = 8 ve num2 = 4 elde edeceğiz. tekrar yapıldığında num1 = 4 num2 = 4 elde ederiz.
kod böyle 0 a ulaşana kadar devam eder ve işlem sayısını yazdırır.

kodumun çıktısında çıkarma işlemleri sırasıyla yazıdığı için hesaplamanın doğru olup olmadığını görebilirsiniz.
