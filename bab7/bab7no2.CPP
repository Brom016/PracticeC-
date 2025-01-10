#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    clrscr();

    // tampilan awal
    cout << "Program Hitung Honor Karyawan Kontrak" << endl;
    cout << "PT. STAY COOL" << endl;
    cout << "--------------------------------------" << endl;

    // var
    int jumlahKaryawan;
    char nama[10][50];
    int golongan[10], pendidikan[10], jamKerja[10];
    int honorTetap = 700000;
    int honorLemburPerJam = 2500;
    int totalGajiDikeluarkan = 0;

    cout << "Masukkan Jumlah Karyawan : ";
    cin >> jumlahKaryawan;

    // input karyawan
    for (int i = 0; i < jumlahKaryawan; i++)
    {
        cout << "Karyawan Ke - " << (i + 1) << endl;

        cout << "Nama Karyawan : ";
        cin.ignore();
        cin.getline(nama[i], 50);

        cout << "Golongan (1/2/3) : ";
        cin >> golongan[i];

        cout << "Pendidikan (1=SMU/2=D3/3=S1) : ";
        cin >> pendidikan[i];

        cout << "Jumlah Jam Kerja : ";
        cin >> jamKerja[i];

        cout << "=================================================" << endl;
    }

    // output
    cout << "=================================================" << endl;
    cout << "PT. STAY COOL" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "No.  Nama        Tunj. Jab  Tunj. Pend  Lembur   Pajak    Bersih" << endl;
    cout << "-------------------------------------------------" << endl;

    // proses dan output
    for (int i = 0; i < jumlahKaryawan; i++)
    {
        int tunjanganJabatan = 0;
        int tunjanganPendidikan = 0;
        int honorLembur = 0;
        int pajak = 0;
        int totalPendapatan = 0;

        // tunjangan jabatan berdasarkan golongan
        switch (golongan[i])
        {
        case 1:
            tunjanganJabatan = honorTetap * 5 / 100;
            break;
        case 2:
            tunjanganJabatan = honorTetap * 10 / 100;
            break;
        case 3:
            tunjanganJabatan = honorTetap * 15 / 100;
            break;
        default:
            tunjanganJabatan = 0;
            break;
        }

        // tunjangan pendidikan
        switch (pendidikan[i])
        {
        case 1:
            tunjanganPendidikan = 200000; // SMU
            break;
        case 2:
            tunjanganPendidikan = 300000; // D3
            break;
        case 3:
            tunjanganPendidikan = 500000; // S1
            break;
        default:
            tunjanganPendidikan = 0;
            break;
        }

        // honor lembur
        if (jamKerja[i] > 240)
        {
            honorLembur = (jamKerja[i] - 240) * honorLemburPerJam;
        }
        totalPendapatan = honorTetap + tunjanganJabatan + tunjanganPendidikan + honorLembur;
        pajak = totalPendapatan * 10 / 100;
        int pendapatanBersih = totalPendapatan - pajak;
        totalGajiDikeluarkan += pendapatanBersih;

        // Output karyawan
        printf("%-4d %-10s Rp %-8d Rp %-8d Rp %-8d Rp %-8d Rp %-8d\n",
               (i + 1), nama[i], tunjanganJabatan, tunjanganPendidikan,
               honorLembur, pajak, pendapatanBersih);
    }

    // Output total gaji
    cout << "-------------------------------------------------" << endl;
    cout << "Total Gaji yang dikeluarkan Rp. " << totalGajiDikeluarkan << endl;

    getch();
}