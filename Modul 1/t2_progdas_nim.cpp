#include <stdio.h>

int main (){
	char nama[50];
	int umur;
	char alamat[100];
	float gaji;
	
	printf("Masukkan Nama : ");
	gets(nama);
		
	printf("Masukkan Umur : ");
	scanf("%d", &umur);
	
	printf("Masukkan Alamat : ");
	scanf("%s", &alamat);
	
	printf("Masukkan Jumlah Gaji : ");
	scanf("%f", &gaji);
	
	printf("============================\n");
	
	float tunjangan;
	tunjangan = gaji * 0.2;
	float total_gaji = gaji + tunjangan;
	
	printf("Nama: %s\n", nama);
	printf("Umur: %d\n", umur);
	printf("Alamat : %s\n ", alamat);
	printf("Gaji : %.2f\n", gaji);
	printf("Tunjangan: %.2f\n", tunjangan);
	printf("Total Gaji: %.2f\n",total_gaji);
	if (gaji >= 10000){
		printf("Bayar Pajak");
	} else {
		printf("Belum bayar pajak"); }
	return 0;
}