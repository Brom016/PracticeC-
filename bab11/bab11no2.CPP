#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

// Fungsi untuk menghitung honor lembur
double hitungHonorLembur(int jamKerja) {
    const double honorHarian = 15000;
    const double tarifLembur = 5000;
    const int jamNormal = 8;

    if (jamKerja > jamNormal) {
        int jamLembur = jamKerja - jamNormal;
        return honorHarian + (jamLembur * tarifLembur);
    } else {
        return honorHarian;
    }
}

int main() {
    clrscr();

    int banyakData;
    printf("Masukkan banyak data: ");
    scanf("%d", &banyakData);

    char nama[50][50];
    int jamKerja[50];
    double honor[50];

    for (int i = 0; i < banyakData; i++) {
        printf("\nData ke-%d:\n", i + 1);
        printf("Nama Pegawai: ");
        fflush(stdin);
        gets(nama[i]);
        printf("Jumlah Jam Kerja: ");
        scanf("%d", &jamKerja[i]);

        honor[i] = hitungHonorLembur(jamKerja[i]);
    }

    printf("\nDaftar Honor Pegawai Honorer\n");
    printf("---------------------------------------------\n");
    printf("No   Nama Pegawai      Jam Kerja   Honor\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < banyakData; i++) {
        printf("%2d   %-15s   %10d   Rp %.2f\n", i + 1, nama[i], jamKerja[i], honor[i]);
    }

    getch();
    return 0;
}
