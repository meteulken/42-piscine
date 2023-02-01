# 42-piscine

# Shell 01
## C01
<code>groups $FT_USER | tr ' ' ',' | tr -d '\n'</code>  <br>
groups: Sunucudaki grupları yazdır. <br>
$FT_USER: $Kullanıcı adı'na ait grupları yazdır.<br>
tr ' ' , : translate(değiştir) ' ' = boşlukları , virgül ile değiştir.<br>
| = pipe bağlamak önceki komutu diğer komutlar ile bağlar.<br>
tr -d '\n' : translate(silme) '\n' = yeni satırları sil.<br>

## C02 <br>
<code>find . -type f -name "*.sh" -exec basename {} .sh \;</code><br>
find: dosyaları bul<br>
. : bu dizindeki dosyaları bul.<br>
-type f: file tipindeki.<br>
-name "*.sh": adında .sh olan tüm dosyalar.<br>
-exec basename: tüm alt dizinlere de uygula.<br>

## C03 <br>
<code>find . | wc -l | tr -d ' '</code> <br>
wc: word count kelimeleri sayar. <br>
-l: kelime yerine listleri satırları sayar. <br>

## C04
<code>ifconfig | grep "ether" | cut -d " " -f 2</code> <br>
ifconfig: sistemdeki ağ bağlantılarını gösterir. <br>
grep "ether": grep arama yapar, "ether" adındaki satırları yazdırır. <br>
cut -d " " -f 2 komutu, bulunan satırdaki 2. sütun (space karakteri ile ayrılmış sütun) verilerini seçer. <br>

## C05
<code>echo -e "42" | tr -d "\n" > "\?$*'MaRViN'*$?\"</code> <br>
özel karakter koymak için her karakter başına "\\" işareti konulur.<br>
örn: \\? \\& \\$ \\\ \\% > touch \\%\\&\\?dosya_adı\\\\\"\\?\\&

## C06
<code>ls -l | awk 'NR % 2 == 1'</code> <br>
ls: dizindeki dosyaları listeler. -l detaylı alt alta listeler. <br>
awk 'NR % 2 == 1' : NR ilk dosyadan başlayarak 2 ye bölümünden kalan bir olanları yazdırır. yani bir dosya yazar diğer dosyayı geçer.

## C07

### Dosyamızı oluşturalım

	touch r_dwssap.sh

```
#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed '1!n;d' | sed -e 's/:.*//' | rev | sort -r | sed -n "$FT_LINE1 $FT_LINE2 p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./' | tr -d '\n'
```


### Örnek çıktı:
```
yxorp, ydobon, xumbsu, tiktr, sys, swen, subegassem, semag, rehctapsid-hceeps, putes-laitini-emong, pukcab, pl, nomead, evloser-dmetsys, eulcoeg, eslup, droloc, ddiuu, cri, anldinim.
```

> cat /etc/passwd 	- sistemde bulunan kullanıcı hesaplarının bilgilerinin saklandığı bir dosyadır. 
> 
> grep -v "^#"	 	- <br> "grep -v" komutu, belirtilen dosya veya veri kaynağındaki tüm satırları tarar ve belirtilen düzenli ifadeye uymayan satırları görüntüler. "^#" düzenli ifade tüm satırların başında "#" işareti olup olmadığını kontrol eder ve bu işaret bulunan satırları dışarıda bırakır.
> 
> sed '1!n;d' 		- ikinciden başlayarak her ikinci satırı yazdır (1,3,5,7)
> 
> sed -e 's/:.*//'	- komutu, sed programının s/:.// seçeneği ile belirtilen dosyadaki her satırdaki ":" ve sonrasını silme işlemi yapar.
> 
> rev			- sistemlerinde komut satırında verilen metnin tersine çevirilmesine yarayan bir komuttur. 
> 
> sort -r			- komutu, verilen dosya veya standart girdi üzerindeki satırları ters sırada sıralar. "-r" seçeneği, sıralamanın ters yapılması anlamına gelir.
> 
> sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' - komutu, bir dosya içeriğinde satırlar arasındaki boşlukları, virgül ve boşluk karakterleriyle değiştirme işlemi yapar.
> 
> sed 's/$/./'		- komutu, UNIX/Linux ortamında kullanılan sed komutu ile verilen bir dosyadaki tüm satırların sonunda nokta (.) karakteri eklemek için kullanılır.
> tr -d '\n' 		- burada "\n" karakterlerinin silinmesini sağlayan bir komuttur.
