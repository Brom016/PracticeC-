#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    // Deklarasi variabel
    char namaKaryawan[50], pendidikan[10];
    int golongan, jamKerja, jamLembur;
    float gajiPokok = 300000;
    float tunjanganJabatan = 0, tunjanganPendidikan = 0, honorLembur = 0, totalGaji;

    // Input data
    cout << "PROGRAM HITUNG GAJI KARYAWAN\n";
    cout << "Nama Karyawan      : ";
    cin.getline(namaKaryawan, 50);
    cout << "Golongan Jabatan (1/2/3): ";
    cin >> golongan;
    cout << "Pendidikan (SMA/D1/D3/S1): ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja   : ";
    cin >> jamKerja;

    // Hitung tunjangan jabatan
    switch (golongan)
    {
    case 1:
        tunjanganJabatan = gajiPokok * 0.05;
        break;
    case 2:
        tunjanganJabatan = gajiPokok * 0.10;
        break;
    case 3:
        tunjanganJabatan = gajiPokok * 0.15;
        break;
    default:
        cout << "Golongan tidak valid!\n";
        getch();
        return;
    }

    // Hitung tunjangan pendidikan
    if (strcmp(pendidikan, "SMA") == 0)
        tunjanganPendidikan = gajiPokok * 0.025;
    else if (strcmp(pendidikan, "D1") == 0)
        tunjanganPendidikan = gajiPokok * 0.05;
    else if (strcmp(pendidikan, "D3") == 0)
        tunjanganPendidikan = gajiPokok * 0.20;
    else if (strcmp(pendidikan, "S1") == 0)
        tunjanganPendidikan = gajiPokok * 0.30;
    else
    {
        cout << "Pendidikan tidak valid!\n";
        getch();
        return;
    }

    // Hitung honor lembur
    if (jamKerja > 8)
    {
        jamLembur = jamKerja - 8;
        honorLembur = jamLembur * 3500;
    }

    // Hitung total gaji
    totalGaji = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

    // Output data
    cout << "\nSiswa yang bernama " << namaKaryawan << "\n";
    cout << "Honor yang diterima:\n";
    cout << "   Tunjangan Jabatan    : Rp " << tunjanganJabatan << "\n";
    cout << "   Tunjangan Pendidikan : Rp " << tunjanganPendidikan << "\n";
    cout << "   Honor Lembur         : Rp " << honorLembur << "\n";
    cout << "-----------------------------------\n";
    cout << "Total Gaji             : Rp " << totalGaji << "\n";

    getch();
}
