# C01

<h2> Temel C Bilgileri: </h2>

<ol>
  <li>Değişkenler: Değişkenler, verilerin saklanması için kullanılan isimli bellek alanlarıdır.</li>
  <li>Veri Tipleri: C'de int, float, double, char, gibi veri tipleri bulunur.</li>
  <li>Operatörler: Aritmetik, atama, karşılaştırma, mantıksal operatörler gibi operatörler bulunur.</li>
  <li>Karar Yapıları: if-else, switch-case gibi yapılar bulunur.</li>
  <li>Fonksiyonlar: Kullanıcı tarafından tanımlanabilir veya kütüphaneden çağırılabilir fonksiyonlar bulunur.</li>
  <li>Pointer'lar: İşaretçiler, bellekteki verilerin adreslerini saklamaya olanak tanır.</li>
  <li>Diziler ve Matrisler: Diziler, birbirine benzer verilerin bellekteki tek yerde saklanmasını sağlar. Matrisler ise 2 boyutlu dizilerdir.</li>
  <li>Dosya İşlemleri: Dosyalardaki verilere erişmek ve dosyalarda veri saklamak için fopen, fclose, fread, fwrite gibi fonksiyonlar bulunur.</li>
</ol>


<h1>Ex00</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex00/ft_strcpy.c"> Click for Code</a> <br>

* Bu "ft_strcpy" fonksiyonu, kaynak dizgenin (src) tüm karakterlerini hedef dizgeye (dest) kopyalamak için kullanılır.<br>
* Fonksiyon, "src" dizgesindeki karakterleri bir "while" döngüsü kullanarak tek tek "dest" dizgesine kopyalar ve son karakter olarak '\0' karakterini ekler. Son olarak, "dest" dizgesi döndürülür.


<h1>Ex01</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex01/ft_strncpy.c"> Click for Code</a> <br>

* Bu "ft_strncpy" fonksiyonu, kaynak dizgenin (src) belirtilen bir uzunluk (n) kadar karakterini hedef dizgeye (dest) kopyalamak için kullanılır.
* Fonksiyon, "src" dizgesindeki karakterleri bir "while" döngüsü kullanarak tek tek "dest" dizgesine kopyalar ve "n" değeri kadar karakter kopyalandıktan sonra "dest" dizgesindeki geri kalan karakterleri '\0' karakteri ile doldurur. Son olarak, "dest" dizgesi döndürülür.


<h1>Ex02</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex02/ft_str_is_alpha.c"> Click for Code</a> <br>

* Bu "ft_str_is_alpha" fonksiyonu, belirtilen bir dizgenin (str) sadece alfabetik karakterlerden oluşup oluşmadığını kontrol etmek için kullanılır.
* Fonksiyon, "str" dizgesindeki karakterleri bir "while" döngüsü kullanarak tek tek kontrol eder. Her bir karakter, alfabetik karakter olup olmadığını kontrol eder ve değilse fonksiyon 0 değerini döndürür. Eğer tüm karakterler alfabetik karakterler ise, fonksiyon 1 değerini döndürür.


<h1>Ex03</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex03/ft_str_is_numeric.c"> Click for Code</a> <br>

* Bu "ft_str_is_numeric" fonksiyonu, belirtilen bir dizgenin (str) sadece rakam karakterlerinden oluşup oluşmadığını kontrol etmek için kullanılır.
* Fonksiyon, "str" dizgesindeki karakterleri bir "while" döngüsü kullanarak tek tek kontrol eder. Her bir karakter, rakam karakteri olup olmadığını kontrol eder ve değilse fonksiyon 0 değerini döndürür. Eğer tüm karakterler rakam karakterleri ise, fonksiyon 1 değerini döndürür.

<h1>Ex04</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex04/ft_str_is_lowercase.c"> Click for Code</a> <br>

* Bu "ft_str_is_lowercase" fonksiyonu, belirtilen bir dizgenin (str) sadece küçük harf karakterlerinden oluşup oluşmadığını kontrol etmek için kullanılır.
* Fonksiyon, "str" dizgesindeki karakterleri bir "while" döngüsü kullanarak tek tek kontrol eder. Her bir karakter, küçük harf karakteri olup olmadığını kontrol eder ve değilse fonksiyon 0 değerini döndürür. Eğer tüm karakterler küçük harf karakterleri ise, fonksiyon 1 değerini döndürür.

<h1>Ex05</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex05/ft_str_is_uppercase.c"> Click for Code</a> <br>

* Bu "ft_str_is_uppercase" fonksiyonu, belirtilen bir dizgenin (str) sadece büyük harf karakterlerinden oluşup oluşmadığını kontrol etmek için kullanılır.
* Fonksiyon, "str" dizgesindeki karakterleri bir "while" döngüsü kullanarak tek tek kontrol eder. Her bir karakter, büyük harf karakteri olup olmadığını kontrol eder ve değilse fonksiyon 0 değerini döndürür. Eğer tüm karakterler büyük harf karakterleri ise, fonksiyon 1 değerini döndürür.


<h1>Ex06</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex06/ft_str_is_printable.c"> Click for Code</a> <br>

* Bu "ft_str_is_printable" fonksiyonu, belirtilen bir dizgenin (str) sadece 32 ile 126 arasındaki ASCII kodlarından oluşup oluşmadığını kontrol etmek için kullanılır.
* Fonksiyon, "str" dizgesindeki karakterleri bir "while" döngüsü kullanarak tek tek kontrol eder. 
* Her bir karakter, 32 ile 126 arasındaki ASCII kodlarından birine sahip olup olmadığını kontrol eder ve değilse fonksiyon 0 değerini döndürür. Eğer tüm karakterler 32 ile 126 arasındaki ASCII kodlarından birine sahipse, fonksiyon 1 değerini döndürür.

<h1>Ex07</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex07/ft_strupcase.c"> Click for Code</a> <br>

* Bu fonksiyon, verilen bir karakter dizisinin (string) her bir karakterini büyük harfe çevirir ve çevrilmiş hali olan diziyi döndürür.
* İçindeki while döngüsü, her bir karakteri tek tek kontrol eder ve eğer küçük harfse, onu büyük harfe çevirir.

<h1>Ex08</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex08/ft_strlowcase.c"> Click for Code</a> <br>

* ft_strlowcase fonksiyonu, verilen karakter dizisindeki bütün harfleri küçük harf haline çevirir ve değiştirilmiş karakter dizisini geri döndürür.
* İşlem, dizinin tüm elemanları için bir döngü kullanarak yapılır ve her bir eleman, "A" ile "Z" arasındaysa 32 eksiltilerek küçük harf haline çevrilir.

<h1>Ex08</h1>

<a href="https://github.com/meteulken/42-piscine/blob/main/C02/ex08/ft_strlowcase.c"> Click for Code</a> <br>

* ft_strlowcase fonksiyonu, verilen str dizisindeki harfleri küçük harfe çevirir ve bu diziyi döndürür.
* İlk olarak ft_strlowcase fonksiyonu çağrılır ve dizinin tüm karakterleri küçük harf haline getirilir. Daha sonra döngü ile dizi içinde gezilir ve her kelime başındaki harf büyük harfe çevrilir.
* Eğer bir karakter 0 ile 9 arasında bir sayıysa c değişkeni 0 olarak kalır ve sonraki harf için büyük harf olarak çevrilmez. Eğer bir karakter sayı değilse c değişkeni 1 yapılır ve sonraki harf için büyük harf olarak çevrilmez. Döngü tamamlandıktan sonra dizi döndürülür.
