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

## SSH dizinine girelim

<code> $ cd ~/.ssh </code> 

## ssh-key komutunu kullanarak ssh oluşturalım
<code> ssh-keygen </code>

## sizden şifre oluşturmanızı isticek 'enter' basarak şifre koymadan devam edebilirsiniz.

<code> cat ~/.ssh/id_rsa.pub
ssh-rsa AAAAB3NzaC1yc2EAAAABIwAAAQEAklOUpkDHrfHY17SbrmTIpNLTGK9Tjom/BWDSU
GPl+nafzlHDTYW7hdI4yZ5ew18JH4JW9jbhUFrviQzM7xlELEVf4h9lFX5QVkbPppSwg0cda3
Pbv7kOdJ/MTyBlWXFCR+HAo3FXRitBqxiX1nKhXpHAZsMciLq8V6RjsNAQwdsdMFvSlVK/7XA
t3FaoJoAsncM1Q9x5+3V0Ww68/eIFmb1zuUFljQJKprrX88XypNDvjYNby6vw/Pb0rwert/En
mZ+AW4OZPnTPI89ZPmVMLuayrD2cE86Z/il8b+gw3r3+1nKatmIkjn2so1d01QraTlMqVSsbx
NrRFi9wrf+M7Q== schaconamylaptop.local </code>

<blockquote> Yukarıdaki gibi bir çıktı vericek bunu id_rsa.pub dosyasına kaydedin. </blockquote> 

<h3> Dosya işlemleri bitti sıra ssh-key'i Intra hesabımıza kaydedicez. <h3>

Intra sitesine giriş yapın : https://profile.intra.42.fr/

1. Sağ üstten kullanıcı adınıza tıklayın > Ayarlar sekmesine tıklayın

2. Sol tarafta bulunan SSH Key kısmına tıklayın.

3. Yeni SSH Key oluştur.

4. Terminalden çıktı olarak kopyaladığımız bağlantıyı içine yapıştırın ve kaydedin.

5. SSH-Key hazır artık git clone ve evaluation yapabilirsiniz.!
