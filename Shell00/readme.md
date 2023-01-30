# SHELL00

<h2> Temel SHELL Bilgileri: </h2>

Shell, bir işletim sistemi üzerinde komut satırı arayüzü sağlayan bir yazılım programıdır. Kullanıcılar shell aracılığıyla sistem işlemlerini kontrol edebilir, dosya yönetimi yapabilir, programları yürütebilir ve benzeri işlemleri gerçekleştirebilir. Temel shell programları arasında bash, zsh ve tcsh bulunur.

<h1>EXERCISE 00</h1>

![image](https://user-images.githubusercontent.com/109483424/215319869-476dcc5a-8fbd-4f39-9b0b-38caf7c763bb.png)

---

#### 1) 'z' adında bir dosya oluştur 

    touch z

#### 2) 'echo' komutu ile "dosyanın içine yazılıcak metin" > dosya_ismi kullanabiliriz.

    echo Z > z
---

<h1>EXERCISE 01</h1>

![image](https://user-images.githubusercontent.com/109483424/215320466-cef30eaf-cbd8-4777-9b43-1f4214ec1474.png)


```
$> ls -l
total 1
-r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00
$>
```

#### 1) dosya oluşturalım: 

	touch testShell00
 
#### 2) içine 40 byte'lık bir metin yazalım: 
```
echo "123456789012345678901234567890123456789" >> ./testShell00
```
#### 3) dosyanın zaman bilgisini değiştirelim: 

$ touch -amt 202406012342 file_name
```
Where: yıl.ay.gün.saat.dakika şeklinde yukarıda değerleri yazdık.
```
-a = accessed
-m = modified
-t = timestamp
### Dosya izinleri değiştirme [CHMOD](https://en.wikipedia.org/wiki/Chmod)

$ chmod 455 testShell00
```
* 4 kullanımı okuma izni verir "read",
* 2 kullanımı yazma izni verir "write",
* 1 kullanımı çalıştırma izni verir "execute", ve
* 0 kullanımı izin vermez  "no permission."
```

<h1>EXERCISE 02</h1>

![image](https://user-images.githubusercontent.com/109483424/215321331-37964641-24f7-4daf-a36d-8c92938620ae.png)



#### 1)iki adet klasör oluşturalım:

	mkdir  test0

	mkdir  test2
	
#### 2)üç adet de test adında dosya oluşturalım:

	touch test{1,3,4}
	
#### 3)ls -s komutu ile test0 dosyasını test6'ya soft link oluşturarak bağlıyalım:

	ln -s test0 test6

`test5` dosyasını `test3` dosyasına bağlayalım
	
	ln test3 test5
	
<blockquote> ln komutu, "test3" dosyasının "test5" adında bir simge bağlantısı oluşturmak için kullanılır. Bu, "test5" adındaki bir dosya oluşturulur ve "test3" dosyasına atanır, böylece "test5" dosyası "test3" dosyasına gösterilir ve aynı içeriğe sahiptir. Değiştirilen bir dosya, simge bağlantısını kullanarak erişilen dosya da değişecektir. </blockquote>

#### 4)dosyanın içine değerler yazarak btye boyutunu belirleyelim
```
printf "1234" > ./test1

printf "1" > ./test3

printf "12" > ./test4
```
#### 5)dosyaların zaman bilgisini ayarlıyalım
```
touch -t 06012047  test0

touch -t 06012146  test1

touch -t 06012245  test2

touch -t 06012344  test3

touch -t 06012343  test4

touch -t 06012344  test5

touch -t 06012220  test6
```

#### 6)dosyalara gerekli izinleri veriyoruz detayları yukarıda anlattım.
```
chmod 715 ./test0

chmod 714 ./test1

chmod 504 ./test2

chmod 404 ./test3

chmod 641 ./test4
```
#### 7)komutu ile kontrolünü sağlıyoruz:

	ls -l
	
#### 8)dosyaları tar ile sıkıştıyoruz: 

	tar -cf exo2.tar *

---

<h1>EXERCISE 03</h1>

#### SSH-KEY Oluşturma

#### 1)SSH dizinine girelim

<code> $ cd ~/.ssh </code> 

#### 2)ssh-key komutunu kullanarak ssh oluşturalım
<code> ssh-keygen </code>

#### 3)sizden şifre oluşturmanızı isticek 'enter' basarak şifre koymadan devam edebilirsiniz.

<code> cat ~/.ssh/id_rsa.pub
ssh-rsa AAAAB3NzaC1yc2EAAAABIwAAAQEAklOUpkDHrfHY17SbrmTIpNLTGK9Tjom/BWDSU
GPl+nafzlHDTYW7hdI4yZ5ew18JH4JW9jbhUFrviQzM7xlELEVf4h9lFX5QVkbPppSwg0cda3
Pbv7kOdJ/MTyBlWXFCR+HAo3FXRitBqxiX1nKhXpHAZsMciLq8V6RjsNAQwdsdMFvSlVK/7XA
t3FaoJoAsncM1Q9x5+3V0Ww68/eIFmb1zuUFljQJKprrX88XypNDvjYNby6vw/Pb0rwert/En
mZ+AW4OZPnTPI89ZPmVMLuayrD2cE86Z/il8b+gw3r3+1nKatmIkjn2so1d01QraTlMqVSsbx
NrRFi9wrf+M7Q== schaconamylaptop.local </code>

<blockquote> Yukarıdaki gibi bir çıktı vericek bunu id_rsa.pub dosyasına kaydedin. </blockquote> 

#### 4)vim id_rsa.pub komutu ile içine girip çıktıyı yapıştırın. Ardından ESC > :wq yazarak dosyayı kaydedin ve çıkın.

#### 5)Dosya işlemleri bitti sıra ssh-key'i Intra hesabımıza kaydedicez.

---	
Intra sitesine giriş yapın : https://profile.intra.42.fr/

1. Sağ üstten kullanıcı adınıza tıklayın > Ayarlar sekmesine tıklayın

2. Sol tarafta bulunan SSH Key kısmına tıklayın.

3. Yeni SSH Key oluştur.

4. Terminalden çıktı olarak kopyaladığımız bağlantıyı içine yapıştırın ve kaydedin.

5. SSH-Key hazır artık git clone ve evaluation yapabilirsiniz.!

---

#### NOT: klist.txt olarak uygulamasını bilmiyorum. Ben böyle yapmıştım.

<h1>EXERCISE 04</h1>

#### 1) dosyamızı oluşturalım

    touch midLS


#### 2) ls listeleme komutu -U = sıralayarak -m = virgül ekle -p / işareti koyarak

    ls -Ump 

<h1>EXERCISE 05</h1>

#### 1) örnek olarak 5 tane git commit log'unun çıktısı:

<code>05cb017fddb87b588f015fbd3b44ac9b96cba760
90f900418ec48052a51a674963e6d5688fa2fe29
6bdaf71595ff90e987398059071b8f668f29abb6
26be13667edd1a882ad5093725d962bc056a9c9f
4caf2adc0b34c02c4c616e2e2673b25bad9cd2e4</code>

#### 2) sh uzantılı dosyamızı oluşturalım

    touch git_commit.sh




#### 2) komutumuz
```
#!/bin/sh
git log -n 5 --pretty=format:"%H"
```
<blockquote> "git log -n 5 --pretty=format:"%H"" komutu, git deposundaki son 5 commit'in hash değerini sadece hash'leri gösterir formatında listeler.</blockquote> 

<h1>EXERCISE 06</h1>



#### 1) Dosyamızı oluşturalım 

    touch gitignore.sh


#### 2) Git dosyalarını listeleyelim:

     git ls-files --exclude-standard --ignored --others

<blockquote> git ls-files komutu, Git veritabanındaki dosyaların listesini verir.<br>
--exclude-standard parametresi, standart Git dışı dosyaları dışlar.<br>
--ignored parametresi, Git tarafından görmezden gelinen dosyaları görmenize olanak tanır.<br>
--others parametresi, Git veritabanındaki dosyalardan farklı olan dosyaları görmenize olanak tanır.<br>

Bu komutun sonucu, Git veritabanındaki dosyalardan farklı olan, standart Git dışı ve görmezden gelinen dosyaların listesini verir.
</blockquote>
---

<h1>EXERCISE 07</h1>


#### "cat -e a" komutu, belirtilen dosya (burada "a") içeriğini ekrandaki satır sonlarını belirterek görüntüler. "-e" parametresi, satır sonlarını "$" sembolü ile gösterir.:

```
%>cat -e a
STARWARS$

Episode IV, A NEW HOPE It is a period of civil war.$

$

Rebel spaceships, striking from a hidden base, have won their first victory against the evil

Galactic Empire.$

During the battle, Rebel spies managed to steal secret plans to the Empire s ultimate weapon, the

DEATH STAR,$

an armored space station with enough power to destroy an entire planet.$

$

Pursued by the Empire s sinister agents, Princess Leia races home aboard her starship, custodian of

the stolen plans that can save her people and restore freedom to the galaxy...$

$
```
---
---

#### 1) Projenin verdiği `a` ve `sw.diff`dosyalarını tar dan çıkartalım:
    
    tar -xf ./'resources.tar.gz'

#### 2) "patch ./a -o ./b < ./sw.diff" komutu, belirtilen ".sw.diff" dosyasındaki değişiklikleri "./a" dosyasından alıp "./b" dosyasına yapıp kaydetme işlemidir.:

    patch ./a  -o ./b < ./sw.diff

> #### "patch ./a -R < ./sw.diff" komutu, "./a" dosyasına uygulanacak "./sw.diff" dosyasındaki değişikliklerin geri alınmasını sağlar. "-R" seçeneği patch'i ters yapmak için kullanılır.:
>
>   patch ./a -R < ./sw.diff

#### "cat -e ./b" komutu, belirtilen dosya "./b" içindeki verileri görüntüler ve her satırın sonundaki 'newline' karakterini görünebilir hale getirir. "-e" seçeneği ile satır sonu karakterleri görüntülenir.:
```
%>cat -e ./b
Episode V, A NEW H0PE It is a period of civil war$
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. $
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.$
$
$
Pursued by the Empire's sinister agents,$
Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..$
$
$
$
$
```

#### 3) Bu komutlar, dosyalar arasındaki farkları ölçmek ve iki fark dosyasını karşılaştırmak için kullanılır. İlk komut "./a" ve "./b" dosyaları arasındaki farkı "./sw.diff2" dosyasına kaydeder. İkinci komut ise "./sw.diff" ve "./sw.diff2" dosyaları arasındaki farkları karşılaştırır.:

    diff ./a ./b > ./sw.diff2

    diff ./sw.diff ./sw.diff2



---
---
