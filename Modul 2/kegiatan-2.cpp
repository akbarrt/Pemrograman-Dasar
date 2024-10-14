#include <stdio.h>
#define PI 3.14159

int main() {
	   float jari_jari, luas, keliling;
	   
	   printf("===== Program Penghitung Luas dan Keliling Lingkaran ======\n");
	   printf("Masukkan jari-jari lingkaran : ");
	   scanf("%f", &jari_jari);
	   
	   luas = (PI * jari_jari * jari_jari);
	   printf("Luas lingkaran : %.2f\n", luas);
	   
	   keliling = (2 * PI * jari_jari);
	   printf("Keliling Lingkaran : %.2f", keliling);
	return 0;
}