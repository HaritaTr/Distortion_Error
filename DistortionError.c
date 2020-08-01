#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double xEp, yNp, xEo, yNo, r1, r2, r3, r4, r5, r6, r7, r8, r9, Dr1, Dr2, Dr3, Dr4, Dr5, Dr6, Dr7, Dr8, Dr9;
	double rp;

		// Bilinenleri isteyelim.
	// Ölçülen fotoğraf koordinatları: xξp, yηp
	printf("xξp değerini giriniz: ");
	scanf("%lf", &xEp);
	printf("yηp değerini giriniz: ");
	scanf("%lf", &yNp);
	// İzdüşüm merkezinin koordinatları; xξo, yηo
	printf("xξo değerini giriniz: ");
	scanf("%lf", &xEo);
	printf("yηo değerini giriniz: ");
	scanf("%lf", &yNo);
	// Kamera kalibrasyon raporu, çapsal uzaklık değerleri; r1, r2, r3, r4, r5, r6, r7, r8, r9
	printf("r1 değerini giriniz: ");
	scanf("%lf", &r1);
	printf("r2 değerini giriniz: ");
	scanf("%lf", &r2);
	printf("r3 değerini giriniz: ");
	scanf("%lf", &r3);
	printf("r4 değerini giriniz: ");
	scanf("%lf", &r4);
	printf("r5 değerini giriniz: ");
	scanf("%lf", &r5);
	printf("r6 değerini giriniz: ");
	scanf("%lf", &r6);
	printf("r7 değerini giriniz: ");
	scanf("%lf", &r7);
	printf("r8 değerini giriniz: ");
	scanf("%lf", &r8);
	printf("r9 değerini giriniz: ");
	scanf("%lf", &r9);
	// Kamera kalibrasyon raporu, distorsiyon hata değerleri; Δr1, Δr2, Δr3, Δr4, Δr5 , Δr6 , Δr7 ,Δr8 , Δr9
	printf("Dr1 değerini giriniz: ");
	scanf("%lf", &Dr1);
	printf("Dr2 değerini giriniz: ");
	scanf("%lf", &Dr2);
	printf("Dr3 değerini giriniz: ");
	scanf("%lf", &Dr3);
	printf("Dr4 değerini giriniz: ");
	scanf("%lf", &Dr4);
	printf("Dr5 değerini giriniz: ");
	scanf("%lf", &Dr5);
	printf("Dr6 değerini giriniz: ");
	scanf("%lf", &Dr6);
	printf("Dr7 değerini giriniz: ");
	scanf("%lf", &Dr7);
	printf("Dr8 değerini giriniz: ");
	scanf("%lf", &Dr8);
	printf("Dr9 değerini giriniz: ");
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

	/* Düzeltme getirilen fotoğraf koordinatları;
	x_ξp = xξp * (1 + (Δrp / rp));
	y_ηp = yηp * (1 + (Δrp / rp)); */

	return 0;
}
