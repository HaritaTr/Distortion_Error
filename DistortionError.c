#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double xEp, yNp, xEo, yNo, r1, r2, r3, r4, r5, r6, r7, r8, r9, Dr1, Dr2, Dr3, Dr4, Dr5, Dr6, Dr7, Dr8, Dr9;
	double rp, Drp1, Drp2, Drp3, Drp4, Drp5, Drp6, Drp7, Drp8, Drp, x_Ep, y_Np;

		// Bilinenleri isteyelim.
	// Ölçülen fotoğraf koordinatları: xξp, yηp
	printf("xξp (mm) değerini giriniz: ");
	scanf("%lf", &xEp);
	printf("yηp değerini giriniz: ");
	scanf("%lf", &yNp);
	// İzdüşüm merkezinin koordinatları; xξo, yηo
	printf("xξo değerini giriniz: ");
	scanf("%lf", &xEo);
	printf("yηo değerini giriniz: ");
	scanf("%lf", &yNo);
	// Kamera kalibrasyon raporu, çapsal uzaklık değerleri; r1, r2, r3, r4, r5, r6, r7, r8, r9
	printf("r1 (mm) değerini giriniz: ");
	scanf("%lf", &r1);
	printf("r2 (mm) değerini giriniz: ");
	scanf("%lf", &r2);
	printf("r3 (mm) değerini giriniz: ");
	scanf("%lf", &r3);
	printf("r4 (mm) değerini giriniz: ");
	scanf("%lf", &r4);
	printf("r5 (mm) değerini giriniz: ");
	scanf("%lf", &r5);
	printf("r6 (mm) değerini giriniz: ");
	scanf("%lf", &r6);
	printf("r7 (mm) değerini giriniz: ");
	scanf("%lf", &r7);
	printf("r8 (mm) değerini giriniz: ");
	scanf("%lf", &r8);
	printf("r9 (mm) değerini giriniz: ");
	scanf("%lf", &r9);
	// Kamera kalibrasyon raporu, distorsiyon hata değerleri; Δr1, Δr2, Δr3, Δr4, Δr5 , Δr6 , Δr7 ,Δr8 , Δr9
	printf("Δr1 (µm) değerini giriniz: ");
	scanf("%lf", &Dr1);
	printf("Δr2 (µm) değerini giriniz: ");
	scanf("%lf", &Dr2);
	printf("Δr3 (µm) değerini giriniz: ");
	scanf("%lf", &Dr3);
	printf("Δr4 (µm) değerini giriniz: ");
	scanf("%lf", &Dr4);
	printf("Δr5 (µm) değerini giriniz: ");
	scanf("%lf", &Dr5);
	printf("Δr6 (µm) değerini giriniz: ");
	scanf("%lf", &Dr6);
	printf("Δr7 (µm) değerini giriniz: ");
	scanf("%lf", &Dr7);
	printf("Δr8 (µm) değerini giriniz: ");
	scanf("%lf", &Dr8);
	printf("Δr9 (µm) değerini giriniz: ");
	scanf("%lf", &Dr9);

		// Bilinmeyenlerin hesaplanması;
	printf("\n\t=== Hesap sonuçları! === \n");
	/* Ölçülen fotoğraf koordinatlarının çapsal uzaklığı;
	rp = Sqrt(((xξp - xξo)^2) + ((yηp - yηo)^2)); */
	rp = pow((pow((xEp - xEo), 2) + pow((yNp - yNo), 2)), 0.5);
	printf("rp değeri: %f\n", rp);
	/* Ölçülen fotoğraf koordinatlarının distorsiyon hatası;
	Δrp = Δr1 + (((Δr2 - Δr1) * (rp - r1)) / (r2 - r1));
	Δrp = Δr2 + (((Δr3 - Δr2) * (rp - r2)) / (r3 - r2));
	Δrp = Δr3 + (((Δr4 - Δr3) * (rp - r3)) / (r4 - r3));
	Δrp = Δr4 + (((Δr5 - Δr4) * (rp - r4)) / (r5 - r4));
	Δrp = Δr5 + (((Δr6 - Δr5) * (rp - r5)) / (r6 - r5));
	Δrp = Δr6 + (((Δr7 - Δr6) * (rp - r6)) / (r7 - r6));
	Δrp = Δr7 + (((Δr8 - Δr7) * (rp - r7)) / (r8 - r7));
	Δrp = Δr8 + (((Δr9 - Δr8) * (rp - r8)) / (r9 - r8)); */
	Drp1 = Dr1 + (((Dr2 - Dr1) * (rp - r1)) / (r2 - r1));
	//printf("Drp1 ortalama değeri: %f\n", Drp1);
	Drp2 = Dr2 + (((Dr3 - Dr2) * (rp - r2)) / (r3 - r2));
	//printf("Drp2 ortalama değeri: %f\n", Drp2);
	Drp3 = Dr3 + (((Dr4 - Dr3) * (rp - r3)) / (r4 - r3));
	//printf("Drp3 ortalama değeri: %f\n", Drp3);
	Drp4 = Dr4 + (((Dr5 - Dr4) * (rp - r4)) / (r5 - r4));
	//printf("Drp4 ortalama değeri: %f\n", Drp4);
	Drp5 = Dr5 + (((Dr6 - Dr5) * (rp - r5)) / (r6 - r5));
	//printf("Drp5 ortalama değeri: %f\n", Drp5);
	Drp6 = Dr6 + (((Dr7 - Dr6) * (rp - r6)) / (r7 - r6));
	printf("Drp6 ortalama değeri: %f\n", Drp6);
	Drp7 = Dr7 + (((Dr8 - Dr7) * (rp - r7)) / (r8 - r7));
	//printf("Drp7 ortalama değeri: %f\n", Drp7);
	Drp8 = Dr8 + (((Dr9 - Dr8) * (rp - r8)) / (r9 - r8));
	//printf("Drp8 ortalama değeri: %f\n", Drp8);
	/* Düzeltme getirilen fotoğraf koordinatları;
	x_ξp = xξp * (1 + (Δrp / rp));
	y_ηp = yηp * (1 + (Δrp / rp)); */
	x_Ep = xEp * (1 + (Drp6 / rp));
	printf("x_ξp değeri: %f\n", x_Ep);
	y_Np = yNp * (1 + (Drp6 / rp));
	printf("y_ηp değeri: %f\n", y_Np);

	return 0;
}
