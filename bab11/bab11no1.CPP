#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

// Fungsi untuk menghitung nilai hasil
double hitungNilaiHasil(double uts, double uas) {
    return (uts * 0.6) + (uas * 0.4);
}

// Fungsi untuk menentukan nilai huruf
char tentukanNilaiHuruf(double nilaiHasil) {
    if (nilaiHasil >= 80) {
        return 'A';
    } else if (nilaiHasil >= 70) {
        return 'B';
    } else if (nilaiHasil >= 56) {
        return 'C';
    } else if (nilaiHasil >= 47) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    clrscr();

    int banyakData;
    printf("Masukkan banyak data: ");
    scanf("%d", &banyakData);

    char nama[50][50];
    double uts[50], uas[50], nilaiHasil[50];
    char nilaiHuruf[50];

    for (int i = 0; i < banyakData; i++) {
        printf("\nData ke-%d:\n", i + 1);
        printf("Nama Mahasiswa: ");
        fflush(stdin);
        gets(nama[i]);
        printf("Nilai UTS: ");
        scanf("%lf", &uts[i]);
        printf("Nilai UAS: ");
        scanf("%lf", &uas[i]);

        nilaiHasil[i] = hitungNilaiHasil(uts[i], uas[i]);
        nilaiHuruf[i] = tentukanNilaiHuruf(nilaiHasil[i]);
    }

    printf("\nDaftar Nilai Mata Kuliah C++\n");
    printf("---------------------------------------------\n");
    printf("No   Nama Mahasiswa   UTS   UAS   Nilai Akhir   Nilai Huruf\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i < banyakData; i++) {
        printf("%2d   %-15s   %3.0f   %3.0f   %11.2f   %c\n", i + 1, nama[i], uts[i], uas[i], nilaiHasil[i], nilaiHuruf[i]);
    }

    getch();
    return 0;
}
