#include <iostream.h>
#include <stdio.h>
#include <conio.h>

// Fungsi untuk menghitung besar potongan
double potong(double pembelian) {
    if (pembelian >= 5000000) {
        return pembelian * 0.35; // Diskon 35%
    } else if (pembelian >= 1000000) {
        return pembelian * 0.20; // Diskon 20%
    } else {
        return 0; // Tidak ada diskon
    }
}

int main() {
    clrscr();

    double pembelian, diskon, total;

    cout << "Program Hitung Potongan.\n";
    cout << "Besar pembelian barang Rp. ";
    cin >> pembelian;

    // Hitung diskon dan total harga setelah diskon
    diskon = potong(pembelian);
    total = pembelian - diskon;

    // Tampilkan hasil dengan printf
    printf("Besar diskon yang diberikan Rp. %.0f\n", diskon); // Tampilkan tanpa desimal
    printf("Besar harga yang harus dibayarkan Rp. %.0f\n", total); // Tampilkan tanpa desimal

    getch();
    return 0;
}
