#include <stdio.h>

int main() {
	int satu, dua, tiga, total;
	printf("===== Program Penghitung Kalori =====\nprogram ini akan menghitung total kalori harian yang dikonsumsi\n");
	
	printf("masukkan kalori makanan pertama : ");
	scanf("%d", &satu);
	printf("masukkan kalori makanan kedua : ");
	scanf("%d", &dua);
	printf("masukkan kalori makanan ketiga : ");
	scanf("%d", &tiga);
	
	total = (satu + dua + tiga);
	
	if (total > 2000) {
		printf("\nTotal kalori melebihi batas \n", total);
	} else
	{
		printf("Asupan kalori Kurang");
	}

	return 0;
}