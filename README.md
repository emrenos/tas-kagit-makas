# Taş-Kağıt-Makas
> Bu C++ programı, bilgisayar ve oyuncu olarak adlandırılan iki oyuncudan birini otomatik seçim yapmasını ve diğerini yani kullanıcıdan da taş, kağıt veya makas girdisini almayı amaçlamaktadır.

## Oynanış
Oyuncular genellikle üçe (değişebilir) kadar sayar ya da el her havaya kalkıp avuç içine indirildiğinde oyunun ismi (taş-kağıt-makas) söylenir. Elin şekli bu durumların hepsinde taş şeklindedir. 2. kez el havaya kalkıp indirildikten sonra 3. kez kaldırıldığında oyuncular bu 3 durumdan birini seçerler ve karşısındakine seçimini gösterir. Buna göre kazanan veya berabere kalan oyuncu ortaya çıkar.

## Kurallar
- Taş, makası yener.
- Makas, kağıdı yener.
- Kağıt, taşı yener.

<img src="https://upload.wikimedia.org/wikipedia/commons/b/b0/Rock-paper-scissors_Shapes.png"/>

---

## Kazanma-Kaybetme-Berabere Kalma Durumları
- **if (kullaniciSecimi==bilgisayarSecimi)** - Berabere kalınır. *(Kullanıcı: Taş-Kağıt-Makas, Bilgisayar: Taş-Kağıt-Makas)*
- **if ((kullaniciSecimi==1 && bilgisayarSecimi==3)** - Kullanıcı kazanır. *(Kullanıcı: Taş, Bilgisayar: Makas)*
- **if (kullaniciSecimi==2 && bilgisayarSecimi==1)** - Kullanıcı kazanır. *(Kullanıcı: Kağıt, Bilgisayar: Taş)*
- **if (kullaniciSecimi==3 && bilgisayarSecimi==2)** - Kullanıcı kazanır. *(Kullanıcı: Makas, Bilgisayar: Kağıt)*
- **if ((bilgisayarSecimi==1 && kullaniciSecimi==3)** - Bilgisayar kazanır. *(Bilgisayar: Taş, Kullanıcı: Makas)*
- **if (bilgisayarSecimi==2 && kullaniciSecimi==1)** - Bilgisayar kazanır. *(Bilgisayar: Kağıt, Kullanıcı: Taş)*
- **if (bilgisayarSecimi==3 && kullaniciSecimi==2)** - Bilgisayar kazanır. *(Bilgisayar: Makas, Kullanıcı: Kağıt)*

## Algoritma
1. Ekrana kullanıcının seçim yapacağı 3 seçenek yazdırılır.
2. Kullanıcıdan seçim yapılması istenir ve kullanıcı seçimini yapar.
3. Eğer seçimi uygunsa program çalışmaya devam eder. Değilse tekrar seçim yapmasını ister.
4. Kullanıcı seçimini yaptıktan sonra, seçimi ekrana yazdırılır.
5. Bilgisayar rastgele olarak 1,2 ve 3 sayılarından birini seçer ve seçimi ekrana yazdırılır.
6. Kazanma, kaybetme veya berabere kalma koşulları incelenir.
7. İncelenmeye göre "Berabere!, KAZANDINIZ!, Kaybettiniz!" mesajları yazdırılır.
8. Kullanıcıya "Tekrar oynamak ister misiniz?" sorusu sorulur ve seçimine göre program devam eder (1) veya oyun biter (2).

## Gereksinimler
- 64 Bit Windows/Linux veya türevleri.
- Açık kaynak programlama aracı (C++ IDE).

## Program Çıktısı
<img src="https://github.com/emrenos/tas-kagit-makas/blob/main/tkm.png"/>

---
