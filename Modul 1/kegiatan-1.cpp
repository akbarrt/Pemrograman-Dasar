#include <stdio.h>

int main (){
    char nama[100];
    int nim;
    float nilai_tugas, nilai_uts, nilai_uas;
	
	//Input Data
    printf("======Progran Penghitung Nilai Akhir Mahasiswa======\n");

    printf("Masukkan Nama Mahasiswa : ");
    gets(nama);

    printf("Masukkan NIM Mahasiswa : ");
    scanf("%d", &nim);

    printf("Masukkan Nilai tugas Mahasiswa (0-100) : ");
    scanf("%f", &nilai_tugas);

    printf("Masukkan Nilai UTS Mahasiswa (0-100) : ");
    scanf("%f", &nilai_uts);
    
    printf("Masukkan Nilai UAS Mahasiswa (0-100) : ");
    scanf("%f", &nilai_uas);
    
    //Operasi Nilai Akhir 
    float nilai_akhir;
    nilai_akhir = (nilai_tugas * 0.2) + (nilai_uts * 0.35) + (nilai_uas * 0.45);
    
    printf("------------------------------------\n");
    
    //Menampilkan Hasil
    printf("Nama Mahasiswa : %s\n", nama);
    printf("NIM Mahasiswa : %d\n", nim);
    printf("Nilai Tugas : %.f\n", nilai_tugas);
    printf("Nilai  UTS : %.f\n", nilai_uts);
    printf("Nilai UAS : %.f\n", nilai_uas);
    printf("Nilai Akhir : %.2f\n", nilai_akhir);
}
