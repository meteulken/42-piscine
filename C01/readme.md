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

<h2> Pointerlar Nedir ? </h2> 

Pointerlar, C programlama dillerinde bellekte yer alan verilerin adreslerinin saklanmasını sağlayan değişken türüdür. Pointerlar, bellekteki verilerin erişimini ve değiştirilmesini mümkün kılar ve daha gelişmiş veri yapılarının oluşturulmasını ve çalıştırılmasını sağlar. Pointerlar, verinin bellekteki adresini tutan bir değişkendir ve bu adrese gösterildiğinde, bellekteki veriye erişilir.
  <pre>
<code> #include <stdio.h>

int main() {
   int x = 10;
   int *ptr;

   ptr = &x;   // x değişkeninin bellek adresini ptr pointerine ata

   printf("x değişkeninin değeri: %d\n", x);
   printf("x değişkeninin adresi: %p\n", &x);
   printf("ptr pointerinin değeri (x adresi): %p\n", ptr);
   printf("ptr pointerinin değerine erişilen değer: %d\n", *ptr);

   return 0; </code>
</pre>
Çıktı :
  <pre>
<code>
x değişkeninin değeri: 10
x değişkeninin adresi: 0x7ffc3789f6a4
ptr pointerinin değeri (x adresi): 0x7ffc3789f6a4
ptr pointerinin değerine erişilen değer: 10
</code>
</pre>
<blockquote> Bu örnekte, x değişkeninin bellek adresi &x şeklinde alınır ve ptr pointerine atanır. ptr pointeri, x değişkeninin bellek adresine gösterir ve x değişkenine erişmek için kullanılır. *ptr şeklinde erişilen veri, x değişkeninin değeridir.

 </blockquote>
  
<ul style="list-style-type:circle;">
  <li>& : operatörü, bellekteki bir değişkenin adresini verir.</li>
  <li>* : operatörü, bellekteki verilere erişmek için kullanılan bir operatordür. </li>
</ul> 


<h1>Ex00</h1>
<img src="https://user-images.githubusercontent.com/109483424/216034302-38042503-6312-4b69-bcee-c51aaaf6b70a.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex00/ft_ft.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon, int *nbr adlı bir parametre alır ve bu parametre olarak verilen bellek adresindeki veriyi 42 olarak değiştirir.
<li> int *nbr parametresi, bir int değişkenin bellek adresini tutan bir pointerdir. <br>
<li> *nbr = 42 ifadesi, nbr pointerinin işaret ettiği bellek adresindeki veriyi 42 olarak değiştirir.
</ol>

<h1>Ex01</h1>
<img src="https://user-images.githubusercontent.com/109483424/216034816-8fe7583a-c8be-4f5b-a166-fd8044e22b5f.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex01/ft_ultimate_ft.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon, int *********nbr adlı bir parametre alır ve bu parametre olarak verilen bellek adresindeki veriyi 42 olarak değiştirir.
<li> int *********nbr parametresi, 9 kez işaret eden bir int değişkenin bellek adresini tutan bir pointerdir.
<li> *********nbr = 42 ifadesi, nbr pointerinin işaret ettiği bellek adresindeki veriyi 42 olarak değiştirir.
</ol>


<h1>Ex02</h1>
<img src="https://user-images.githubusercontent.com/109483424/216033519-9551d04b-9f9d-44b1-81da-a839648e8637.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex02/ft_swap.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon, int *a ve int *b adlı iki parametre alır ve bu iki parametre olarak verilen bellek adreslerindeki verileri yer değiştirir.
<li> int *a ve int *b parametreleri, bellekteki int değişkenlerin adreslerini tutan pointerlardır.
<li> İçerisinde bulunan veriler, swap değişkeni kullanılarak yer değiştirilir.
</ol>

<h1>Ex03</h1>
<img src="https://user-images.githubusercontent.com/109483424/216035144-c731f5c2-7b32-4716-8934-ae8bea6e0d81.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex03/ft_div_mod.c"> Click for Code</a> <br>
<ol>
<li> int a ve int b parametreleri, bölünecek sayıları tutan değişkenlerdir.
<li> int *div ve int *mod parametreleri ise, bölüm ve kalanı tutacak bellek adreslerini tutan pointerlardır.
<li> Eğer b 0 değilse, div pointerinin işaret ettiği bellek adresindeki veri a ve b değerlerinin bölümüne, mod pointerinin işaret ettiği bellek adresindeki veri de a ve b değerlerinin kalanına atanır.
</ol>

<h1>Ex04</h1>
<img src="https://user-images.githubusercontent.com/109483424/216035350-f118e147-9d02-4054-9540-c27e9c34ac31.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex04/ft_ultimate_div_mod.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon, int *a ve int *b adlı iki parametre alır ve verilen a ve b değerlerinin bellekteki adreslerindeki verilerin bölümünü ve kalanını bu adreslerdeki verilere atar.
<li> int *a ve int *b parametreleri, bölünecek sayıların bellek adreslerini tutan pointerlardır.
<li> İçerisindeki veriler, div ve mod değişkenleri kullanılarak bölüm ve kalanı hesaplanır ve a ve b pointerlerinin işaret ettiği bellek adreslerindeki veriler bu bölüm ve kalana atanır.
</ol>

<h1>Ex05</h1>
<img src="https://user-images.githubusercontent.com/109483424/216035649-72bceed1-7d17-430e-8809-75e3fb4fc29e.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex05/ft_putstr.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon, char *str adlı bir parametre alır ve verilen str değişkeni içindeki karakter dizisini ekrana yazdırır.
<li> char *str parametresi, ekrana yazdırılacak karakter dizisini tutan bir pointerdir.
<li> İçerisindeki veriler, döngü kullanılarak tek tek ekrana yazdırılır ve '\0' karakterine kadar devam eder.
</ol>

<h1>Ex06</h1>
<img src="https://user-images.githubusercontent.com/109483424/216035890-d5bdd7c5-d38c-42b4-9df8-00adb4ae5adf.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex06/ft_strlen.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon, char *str adlı bir parametre alır ve verilen str değişkeni içindeki karakter dizisinin uzunluğunu döndürür.
<li> char *str parametresi, uzunluğu hesaplanacak karakter dizisini tutan bir pointerdir.
<li> İçerisindeki veriler, döngü kullanılarak tek tek kontrol edilir ve '\0' karakterine kadar devam eder.
<li> En sonunda, döngü sayacı değişkeninin değeri döndürülür ve bu değer karakter dizisinin uzunluğudur.
</ol>

<h1>Ex07</h1>
<img src="https://user-images.githubusercontent.com/109483424/216036039-a37255d6-7e9e-4077-a8c3-6dd980c824d9.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex07/ft_rev_int_tab.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon, int *tab ve int size adlı iki parametre alır ve verilen tab dizisinin elemanlarını tersine çevirir.
<li> int *tab parametresi, tersine çevrilecek sayıları tutan bir pointerdir.
<li> int size parametresi ise dizinin eleman sayısını tutar.
<li> İçerisindeki veriler, döngü kullanılarak tek tek tersine çevirilir ve dizinin ortasına kadar devam eder. En sonunda, dizi tersine çevrilmiş olur.
</ol>

<h1>Ex08</h1>
<img src="https://user-images.githubusercontent.com/109483424/216036424-c181a3d0-1ecc-47c3-99b0-0433796280ed.png" alt="Ecole 42">
<a href="https://github.com/meteulken/42-piscine/blob/main/C01/ex08/ft_sort_int_tab.c"> Click for Code</a> <br>
<ol>
<li> Bu fonksiyon "tab" isimli bir int dizisi ve "size" isimli bir int veri tipindeki değişkeni alır.
<li> İçerisinde iki farklı döngü bulunur. İlki "size" değişkeninin 0'dan büyük olduğu sürece devam eder. 
<li> İçerisindeki ikinci döngü, "i" isimli bir int değişkeninin "size - 1" değerine kadar artmasıyla devam eder.
<li> İçerisinde bulunan if else koşulu "i" ve "i + 1" indekslerindeki değerlerin karşılaştırılmasıyla yapılır ve "i" değeri "i + 1" değerinden büyükse, "swap" isimli int değişkeni aracılığıyla yer değiştirilir.
<li> İlk döngünün sonunda "size" değişkeni 1 azaltılır ve işlem tekrar başlar. Böylece verilen dizi sıralanmış hale gelir.
</ol>
