# 42-piscine

| FT_ATOI.C

Öncelikle boşluk varsa veya o anki değer ascii tablosunda 9 ile 13 arasında ise atlıyor. Eğer eksi görürse neg’e eksi bir atıyor. Eğer artı görürse atlıyor. Döngüde o anki değerin rakam olup olmadığını kontrol ediyor. Eğer rakamsa değeri ascii tablosunda yazılabilecek hale çeviriyor ve neg ile çarpıyor. Diğer koşullarda integerin minimum ve maksimum değerini kontrol ediyoruz. En son olarak ekrana değeri yazdırıyor.

| FT_ BZERO.C

Kullanılan fonksiyonun ramde açtığı yeri sıfırlar.

| FT_CALLOC.C

Bzero fonksiyonun yaptığı işlemi memoryde yapar.

| FT_ISALNUM.C

Girilen değerin harf veya rakam mı olduğunu kontrol ediyor.

| FT_ISALPHA.C

Girilen değerin harf olup olmadığını kontrol ediyor.

| FT_ISASCII.C

Girilen değerin ascii tablosunda olup olmadığını kontrol eder.

| FT_ISDIGIT.C

Girilen değerin rakam olup olmadığını kontrol ediyor.

| FT_ISPRINT.C

Girilen değerin yazdırılabilir olup olmadığını kontrol eder.

| FT_ITOA.C

Atoinin tersi olarak integer değerini char değerine çevirir.

| FT_MEMCHR.C

Girilen dizinin içinde belirlediğimiz yere kadar belirlediğimiz karakteri arar ve bulduğu değer dahil sonrasını döndürür.

| FT_MEMCMP.C

S1 ve S2 dizilerini birbiri arasında belirledimiz yere kadar kontrol edip ilk farklılık gördüğü değerleri ascii tablosunda birbirinden çıkarıp ekrana yazar. Strchr fonksiyonundan farklı olarak bu fonksiyon bu işlemi memoryde yapar.

| FT_MEMCPY.C

İlk dizimizdeki değerli belirlediğimiz yere kadar ikinci dizimize kopyalar.

| FT_MEMMOVE.C

Memcpyden farklı olarak kopyalanacak dizimizin belirlediğimiz yerinden başlayarak kopyalar. Bu şekilde örtüşmeleri engeller.

| FT_MEMSET.C

Dizimizdeki harfleri belirlediğimiz yere kadar belirlediğimiz değer ile değiştirir. 

| FT_PUTCHAR_FD.C

Belirttiğimiz dosyanın içine belirlediğimiz değeri yazar.

| FT_PUTENDL_FD.C

Girilen değeri null olana kadar adım adım ekrana yazdırır ve satır atlar.

| FT_PUTNBR_FD.C

Putnbr fonksiyonundan farklı olarak girilen sayıyı dosyanın içine yazdırır.

| FT_PUSTR_FD.C

Girilen dizinin uzunluğunu kontrol edip dosyanın içine yazdırır.

| FT_SPLIT.C

Girilen diziyi ayraç olarak belirlediğimiz değer görene kadar okur ve ayraç görünce ayraç olarak belirlediğimiz değerden öncesini bir kelime olarak kabul eder. Sonrasında dizimiz bitene kadar kadar bu işlem devam eder. Devamında hafızada tutulan bu kelimeleri malloc fonksiyonuna gönderip malloc fonksiyonunda bu kelimelerin boyutu kadar yer açar. Sonrasında açtığı bu yere hafızasındaki kelimeleri har harf kopyalar ve ekrana yazdırır.

| FT_STRCHR.C

S1 ve S2 dizilerini birbiri arasında belirledimiz yere kadar kontrol edip ilk farklılık gördüğü değerleri ascii tablosunda birbirinden çıkarıp ekrana yazar.

| FT_STRDUP.C

Malloc fonksiyonu ile girilen dizinin boyutu kadar yer açıp açılan yere diziyi kopyalar.

| FT_STRITERI.C

Stringin bütün karakterlerini f fonksiyonuna maruz bırakır.

| FT_STRJOIN.C

Belirleyeceğimiz iki diziyi sırayla malloca atıp ard arda yazar.

| FT_STRLCAT.C

Kaynak dizimizi belirlediğimiz uzunluk kadar hedef dizine yapıştırır.

| FT_STRLCPY.C

Kaynak dizimizi belirlediğimiz uzunluk kadar hedef dizine yapıştırır.

| FT_STRLEN.C

Girilen dizinin uzunluğunu ekrana yazdırır.

| FT_STRMAPI.C

Striteri fonksiyonundan farklı olarak f fonksiyonuna maruz bıraklan her değeri yeni bir diziye yazdırır.

| FT_STRNCMP.C

Memcmp fonksiyonundan farklı olarak belirlediğimiz yere kadar karşılaştırır ve bu karşılaştırmanın sonucu olarak girilen return değerlerini döndürür.

| FT_STRNSTR.C

Girilen dizimizin içinde belirlediğimiz diziyi arar ve belirlediğimiz diziyi ve  sonrasını ekrana yazdırır.

| FT_STRCHR.C

Belirlediğimiz dizinin içinde belirlediğimiz karakteri arayıp bulduktan sonra geri kalanını yazdıracaktık lakin bunun kolay versiyonu olarak belirlediğimiz harfi belirlediğimiz dizinin sonundan başlayarak aradık. İlk karşılaştığı değerden sonrasını ekrana yazdırdık.

| FT_STRTRIM.C

Dizimin içinde belirlediğimiz diziyi arayıp bulur ve bulduğu yerler başta veya sonda ise bu kısımları keser. Kalan kısmı yeni bir dizi haline çevirir ve ekrana yazdırır.

| FT_SUBSTR.C

Dizimizin içinde belirlediğimiz başlangıç noktasından itibaren belirlediğimiz değer sayısı kadar alıp dizi haline getirir ve bu diziyi ekrana yazar.

| FT_TOLOWER.C

Girilen dizideki harfleri küçültür.

| FT_TOUPPER.C

Girilen dizideki harfleri büyültür.
