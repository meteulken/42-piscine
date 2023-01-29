# C00

<h1>Ex00</h1>
<code> void	ft_putchar(char c) </code>
<blockquote> Bu kod parçacığı "ft_putchar" isimli bir fonksiyon tanımlar. Bu fonksiyon, verilen bir karakteri (c) ekrana yazdırmak için "write" fonksiyonunu kullanır. "write" fonksiyonu, bir dosyaya veya standart çıktıya (1) verilen veriyi yazmak için kullanılır. "1" değeri standart çıktı için kullanılır, "&c" değeri ise yazdırılacak veri adresidir ve "1" değeri ise yazdırılacak verinin boyutudur.</blockquote>

<h1>Ex01</h1>
<code> void	ft_print_alphabet(void) </code>
<blockquote> Bu kod parçacığı "ft_print_alphabet" isimli bir fonksiyon tanımlar. Bu fonksiyon, "a" dan "z" ye kadar olan harfleri ekrana yazdırmak için "write" fonksiyonunu kullanır. "alphabet" değişkeni başlangıçta 'a' harfi olarak tanımlanır ve döngü ile sırasıyla "z" harfine kadar olan harfler yazdırılır. "write" fonksiyonu, bir dosyaya veya standart çıktıya (1) verilen veriyi yazmak için kullanılır. "1" değeri standart çıktı için kullanılır, "&alphabet" değeri ise yazdırılacak veri adresidir ve "1" değeri ise yazdırılacak verinin boyutudur.</blockquote>

<h1>Ex02</h1>
<code> void	ft_print_reverse_alphabet(void) </code>
<blockquote> Bu kodun amacı alfabetik olarak sıralanmış harflerin tersini yazmaktır. 'z' harfinden başlar ve 'a' harfine kadar devam ederek her harfi tek tek yazdırır.</blockquote>

<h1>Ex03</h1>
<code> void	ft_print_numbers(void) </code>
<blockquote> Bu C dili fonksiyonu bir döngü oluşturur ve ekrana 0 ile 9 arasındaki sayıları yazdırır. Fonksiyon, write() fonksiyonunu kullanarak her bir sayıyı ekrana yazdırır ve artan bir değişkenle bir sonraki sayıyı işleme koyar.
</blockquote> 

<h1>Ex04</h1>
<code> void	ft_is_negative(int n) </code>
<blockquote> ft_is_negative fonksiyonu, int veri tipinde bir sayı alır ve eğer sayı negatifse "N", pozitifse "P" karakterini standard çıktıya yazar.  </blockquote> 

<h1>Ex05</h1>
<code> void	ft_print_comb(void) </code>
<blockquote> Bu C dilinde bir fonksiyondur ve 0 ile 7 arasındaki 3 basamaklı sayıların tüm kombinasyonlarını yazdırır. İlk basamak için "a" değişkeni kullanılır ve while döngüsü ile 0 ile 7 arasındaki değerleri alır. İkinci basamak için "b" değişkeni kullanılır ve "a" değişkeninin değerinden 1 fazla olarak başlar ve 8'e kadar gitmesi sağlanır. Üçüncü basamak için de "c" değişkeni kullanılır ve "b" değişkeninin değerinden 1 fazla olarak başlar ve 9'a kadar gitmesi sağlanır. Her bir kombinasyon yazdırılırken aynı zamanda virgül ve boşluk kullanılır ve a değişkeninin 7 olduğu durumda virgül ve boşluk kullanılmaz. </blockquote> 

<h1>Ex06</h1>
<code> void	ft_print_comb2(void) </code>
<blockquote> Bu C dilinde bir fonksiyon örneğidir. Bu fonksiyon, ikilik tabanında (0-99 arası) tüm sayı çiftlerini yazdırır. Çıktıdaki sayılar arasında bir virgül ve boşluk bulunur.

Aşağıdaki özellikleri içermektedir:

ft_putchar(char c): Bu fonksiyon, verilen bir karakteri ekrana yazdırır.
ft_print_comb2(): Bu fonksiyon, 0 ile 99 arasındaki tüm sayı çiftlerini ekrana yazdırır.
Mod alma işlemi (a % 10), a değişkeninin 10'a bölümünden kalanı verir. Bu kalan, bir sayının birler basamağını verir. Örneğin, 23 % 10 = 3, yani 23 sayısının birler basamağı 3'tür.

Bölme işlemi (a / 10), a değişkeninin 10'a bölümünü verir. Bu bölüm, bir sayının onlar basamağını verir. Örneğin, 23 / 10 = 2, yani 23 sayısının onlar basamağı 2'dir.
</blockquote> 

<h1>Ex07</h1>
<code> void	ft_putnbr(int nb) </code>
<blockquote> Bu, bir C programıdır ve ft_putnbr fonksiyonu yazılmıştır. Fonksiyon, verilen bir tam sayıyı (int tipinde) ekrana yazdırmak için tasarlanmıştır. Öncelikle, verilen sayı -2147483648 ise özel olarak işlenir ve '-' ve '2' karakterleri ekrana yazdırılır. Eğer sayı negatif ise, karakter olarak '-' ekrana yazdırılır ve sayı pozitif hale getirilir. Sonra, verilen sayı 9'dan büyükse, ft_putnbr fonksiyonu kendini çağırarak verilen sayının 10'a bölümü ve 10'a göre modunu ayrı ayrı yazdırır. Eğer sayı 9'dan küçük ise, ft_putchar fonksiyonu kullanılarak sayının karakter karşılığı ekrana yazdırılır. </blockquote> 

