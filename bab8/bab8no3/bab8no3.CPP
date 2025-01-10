#include <iostream.h>
#include <stdio.h>
#include "hitnilai.h"

int main()
{
    double nilaiAbsensi, nilaiTugas, nilaiUTS, nilaiUAS;

    cout << "Program Hitung Nilai Akhir Mata Kuliah\n";
    cout << "Masukkan Nilai Absensi : ";
    cin >> nilaiAbsensi;
    cout << "Masukkan Nilai Tugas : ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai U.T.S : ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai U.A.S : ";
    cin >> nilaiUAS;

    double murniAbsensi = hitungNilaiMurni(nilaiAbsensi, 10);
    double murniTugas = hitungNilaiMurni(nilaiTugas, 20);
    double murniUTS = hitungNilaiMurni(nilaiUTS, 30);
    double murniUAS = hitungNilaiMurni(nilaiUAS, 40);
    double nilaiAkhir = hitungNilaiAkhir(nilaiAbsensi, nilaiTugas, nilaiUTS, nilaiUAS);

    printf("Nilai Murni Absensi = %.2f * 10%% = %.2f\n", nilaiAbsensi, murniAbsensi);
    printf("Nilai Murni Tugas = %.2f * 20%% = %.2f\n", nilaiTugas, murniTugas);
    printf("Nilai Murni U.T.S = %.2f * 30%% = %.2f\n", nilaiUTS, murniUTS);
    printf("Nilai Murni U.A.S = %.2f * 40%% = %.2f\n", nilaiUAS, murniUAS);
    printf("Nilai Akhir yang diperoleh sebesar : %.2f\n", nilaiAkhir);

    return 0;
}
