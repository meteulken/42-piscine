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
