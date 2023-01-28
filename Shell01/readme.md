# 42-piscine

# Shell 01
## C01
groups $FT_USER | tr ' ' ',' | tr -d '\n'
groups: Sunucudaki grupları yazdır.
$FT_USER: $Kullanıcı adı'na ait grupları yazdır.
tr ' ' , : translate(değiştir) ' ' = boşlukları , virgül ile değiştir.
| = pipe bağlamak önceki komutu diğer komutlar ile bağlar.
tr -d '\n' : translate(silme) '\n' = yeni satırları sil.

## C02
find . -type f -name "*.sh" -exec basename {} .sh \;
find: dosyaları bul
. : bu dizindeki dosyaları bul.
-type f: file tipindeki.
-name "*.sh": adında .sh olan tüm dosyalar.
-exec basename: tüm alt dizinlere de uygula.

## C03
find . | wc -l | tr -d ' '
wc: word count kelimeleri sayar.
-l: kelime yerine listleri satırları sayar.

## C04
ifconfig | grep "ether" | cut -d " " -f 2
ifconfig: sistemdeki ağ bağlantılarını gösterir.
grep "ether": grep arama yapar, "grep" adındaki satırları yazdırır.
cut -d " " -f 2: cut kesme yapar. -d " " boşlukları seçmez -f 2 sadece o sütünleri seçer.

------------

## C06
ls -l | awk 'NR % 2 == 1'
ls: dizindeki dosyaları listeler. -l detaylı alt alta listeler.
awk 'NR % 2 == 1' : NR ilk dosyadan başlayarak 2 ye bölümünden kalan bir olanları yazdırır. yani bir dosya yazar diğer dosyayı geçer.

