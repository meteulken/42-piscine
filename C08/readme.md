# C08

<h2> Header Dosyası Nedir ? </h2> 

<ol>
<li>C programlama dilinde bir başlık dosyası, diğer kaynak kod dosyalarında kullanılan değişken, fonksiyon ve yapıların prototiplerini içeren bir dosyadır.</li> 
<li>Başlık dosyaları genellikle ".h" uzantılıdır ve C kaynak kod dosyalarına dahil edilirler.</li>
<li>Başlık dosyaları, fonksiyonlar, makrolar, sabitler ve veri tipleri gibi genel tanımları içerebilirler.</li>
<li>Programcılar, bir kaynak kod dosyasında bu tür bir tanım kullanmak istediklerinde, başlık dosyasını #include ön işlemci direktifiyle dahil ederler.</li>
<li>Böylece, ilgili tanımlar kodun farklı bölümlerinde tekrar edilmek zorunda kalmaz.</li>
<li>Başlık dosyaları, kodun okunabilirliğini artırır, zaman kazandırır ve hataları önler.</li>
<li>Ayrıca, C dili için standart başlık dosyaları da vardır. Örneğin, <stdio.h> dosyası, standart giriş/çıkış fonksiyonlarını tanımlar.</li>
</ol>

<h1> EX 00 </h1>

<h2> #define  Nedir ? </h2> 

#ifndef, "if not defined" kelimelerinin kısaltmasıdır. Bu ön işlemci direktifi, belirli bir sembolün daha önce tanımlanıp tanımlanmadığını kontrol eder.
  <pre>
<code>#ifndef FT_H
#define FT_H

// sembol tanımları

#endif </code>
</pre>
Yukarıdaki kod bloğunda, önce #ifndef FT_H kullanılır. Bu, FT_H daha önce tanımlanmamışsa, sonraki kod bloğunun derlenmesini sağlar. Daha sonra #define FT_H kullanılarak sembol tanımlanır ve son olarak #endif kullanılır.
<blockquote>
#ifndef FT_H yapısı, programlama projelerinde aynı kod dosyasının birden fazla kez dahil edilmesini önlemeye yardımcı olur. Örneğin, bir başlık dosyasını dahil eden bir C kaynak kodu dosyası, başlık dosyasındaki tanımlamaları birden fazla kez dahil ederek programın doğru şekilde derlenmesini sağlar. Bu durum, gereksiz bellek kullanımına, derleme hatalarına ve diğer sorunlara neden olabilir. #ifndef, bu tür hataların önlenmesine yardımcı olan bir koruma mekanizması sağlar.</blockquote>

<h1> EX 01 </h1>

<h2> typedef char t_bool nedir ? </h2> 

Bu kod satırı, "t_bool" adında bir veri tipi tanımlamakta ve bu veri tipinin "char" veri tipi ile eşdeğer olduğunu belirtmektedir. Bu şekilde, C dilinde boolean değerleri tutmak için kullanılan 1 byte boyutlu "char" veri tipi, "t_bool" adı altında tanımlanarak daha anlaşılır hale getirilir.

  <pre>
<code>t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}</code>
</pre>
Bu kod, "EVEN" adında bir makro tanımlar ve bu makro, bir parametre olan "nbr" sayısının çift olup olmadığını kontrol etmek için kullanılır. Makro tanımı, "nbr" sayısı çift ise "1", tek ise "0" döndürür.

<h1> EX 02 </h1>

<code># define ABS(Value) ((Value < 0) ? -Value : Value) </code>

Bu kod, "ABS" adında bir makro tanımlar ve bu makro, bir sayının mutlak değerini hesaplamak için kullanılır. Makro tanımı, "Value" parametresinin değerine bağlı olarak, eğer "Value" negatif ise negatifini, pozitif ise kendisini döndürür.

Makro tanımındaki "#define" komutu, "ABS" ismiyle bir makro tanımlar. Makronun kendisi, iki parantez arasında yazılmıştır. Parantezlerin içindeki "(Value < 0) ? -Value : Value" ifadesi, "Value" parametresinin değerini kontrol eder. Eğer "Value" negatif ise, "? ve :" operatörü ile negatifin alınması ve pozitif ise değerin kendisinin alınması sağlanır.
<br>Yani "?" operatörü bir if koşulu gibi düşünebiliriz "(Value < 0)" bu koşuldan true dönerse ":" operatörün sol kısmı false dönerse sağ kısmı geçerli olucaktır.<br>
	
<h1> EX 03 </h1>
  <pre>
<code>typedef struct s_point
{
	int	x;
	int	y;
}				t_point;</code>
</pre>
	
Bu kod, "t_point" adında bir yapı tanımlar. Bu yapı, iki tamsayı değişkeni olan "x" ve "y" içerir.

Ayrıca, bu yapıyı daha kolay kullanmak için "typedef" anahtar kelimesi kullanılır. "typedef" ile, "struct s_point" yerine sadece "t_point" kullanılabilir.

 <pre>
<code>void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}</code>
</pre>	
	
Bu kod, "set_point" adında bir fonksiyon tanımlar. Bu fonksiyon, bir t_point yapısı işaretçisi alan ve bu yapıdaki x ve y değerlerini sırasıyla 42 ve 21 olarak ayarlayan bir işleve sahiptir.

Fonksiyon, "void" ile başlar, yani herhangi bir değer döndürmez. Fonksiyon, "t_point *point" parametresi ile çağrılır, bu da bir t_point yapısı işaretçisi beklediği anlamına gelir. Fonksiyon içinde, "->" operatörü kullanılarak, işaretçinin gösterdiği yapıdaki x ve y değişkenlerine 42 ve 21 değerleri atanır.
	
<h1> EX 04 </h1>
<pre><code>
while (index < ac)
	{
		array[index].size = ft_str_length(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}</code>
</pre>
	
Bu kod, bir while döngüsü içinde çalışan bir dizi işlemi gerçekleştirir. Döngü, "index" adında bir değişkenin "ac" adlı bir sınır değerine kadar artırılmasıyla kontrol edilir.

Her turda, "array[index]" adlı bir t_point yapısı elemanına, "ft_str_length" ve "ft_strdup" fonksiyonlarının sonuçları atanır. Bu işlemler, "av[index]" adlı bir karakter dizisine dayanır.

İlk önce, "ft_str_length" fonksiyonu, "av[index]" karakter dizisinin uzunluğunu hesaplar ve bu uzunluğu "array[index].size" elemanına atar.

Daha sonra, "av[index]" karakter dizisi, "array[index].str" elemanına doğrudan atanır.

Son olarak, "ft_strdup" fonksiyonu, "av[index]" karakter dizisini kopyalar ve bu kopyayı "array[index].copy" elemanına atar. Bu, "ft_strdup" fonksiyonunun dinamik bellek tahsisi yaptığı ve bu nedenle bellek yönetimi açısından önemli olduğu anlamına gelir.

Bu döngü, t_point yapısı içindeki üç farklı elemanın doldurulmasını sağlar: "size", "str" ve "copy". Bu elemanlar, "av" adlı bir dizi karakter dizisindeki her öğe için ayrı ayrı hesaplanır ve dizi elemanlarına atanır. Bu işlem, daha sonra bu yapıları kullanarak işlem yapmak için kullanılabilir.
