#include <iostream.h>
#include <conio.h>
#include "lingkaran.h" // Menyertakan file header

int main()
{
    double jariJari;

    // Input nilai jari-jari lingkaran
    cout << "Masukkan Nilai Jari-jari: ";
    cin >> jariJari;

    // Menghitung luas dan keliling lingkaran menggunakan fungsi dari header
    double luas = hitungLuas(jariJari);
    double keliling = hitungKeliling(jariJari);

    // Menampilkan hasil
    cout << "Luas Lingkaran     : " << luas << endl;
    cout << "Keliling Lingkaran : " << keliling << endl;

    // Menunggu input sebelum keluar
    cout << "Tekan sembarang tombol untuk keluar...";
    getch();

    return 0;
}
