// File header: hitnilai.h
#ifndef HITNILAI_H
#define HITNILAI_H

double hitungNilaiMurni(double nilai, double persentase)
{
    return nilai * (persentase / 100.0);
}

double hitungNilaiAkhir(double nilaiAbsensi, double nilaiTugas, double nilaiUTS, double nilaiUAS)
{
    return hitungNilaiMurni(nilaiAbsensi, 10) +
           hitungNilaiMurni(nilaiTugas, 20) +
           hitungNilaiMurni(nilaiUTS, 30) +
           hitungNilaiMurni(nilaiUAS, 40);
}

#endif
