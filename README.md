# Fotogrametri Distorsiyon Hatası

**Amaç;**
=========

Distorsiyon, görüntü niteliğindeki bir eksiklik değildir. Merkezsel izdüşüm esaslarını bozacak biçimde, büyütmenin eksenel uzaklıkla değişmesi nedeni ile ortaya çıkan bir kusur olmaktadır. Hava ve yer fotogrametrisinde kullanılan objektiflerde distorsiyonun etkisini mutlaka gidermek gerekmektedir. Böylece merkezsel izdüşümün koşulları yerine gelmektedir. Yazılım, kamera kalibrasyon raporundan alınan çapsal uzaklık ve distorsiyon hata değerleri yardımıyla,  ölçülen fotoğraf koordinatlarının çapsal uzaklığı ve distorsiyon hatasını hesaplayarak düzeltilmiş fotoğraf koordinatlarına ulaşmamızı sağlamaktadır.

**Kullanım;**
==============

Yazılım çalıştırıldığında;

+ Ölçülen fotoğraf koordinatları: xξp, yηp
+ İzdüşüm merkezinin koordinatları; xξo, yηo
+ Kamera kalibrasyon raporu, çapsal uzaklık değerleri; r1, r2, r3, r4, r5, r6, r7, r8, r9
+ Kamera kalibrasyon raporu, distorsiyon hata değerleri; Δr1,  Δr2, Δr3,  Δr4, Δr5 , Δr6 , Δr7 ,Δr8 , Δr9

Yukarıdaki değerlerin girilmesi gerekmektedir.

Hesaplanan;

+ Ölçülen fotoğraf koordinatlarının çapsal uzaklığı; rp
+ Ölçülen fotoğraf koordinatlarının distorsiyon hatası; Δrp
+ Düzeltme getirilen fotoğraf koordinatları; x_ξp, y_ηp
