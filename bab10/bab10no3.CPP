#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

// Fungsi untuk menentukan tarif penyewaan dan jenis buku
int Tarif(char kode, char jenisBuku[]) {
    if (kode == 'C' || kode == 'c') {
        strcpy(jenisBuku, "CerPen (Kumpulan Cerita Pendek)");
        return 500;
    } else if (kode == 'K' || kode == 'k') {
        strcpy(jenisBuku, "Komik");
        return 700;
    } else if (kode == 'N' || kode == 'n') {
        strcpy(jenisBuku, "Novel");
        return 1000;
    } else {
        strcpy(jenisBuku, "Kode Buku Tidak Valid");
        return 0;
    }
}

int main() {
    clrscr();

    char nama[50], kodeBuku;
    char jenisBuku[50];
    int banyakPinjam, tarif, jumlahBayar;

    // Tampilan masukan
    printf("Perpustakaan \".Kecil-Kecilan\".\n");
    printf("----------------------------\n");
    printf("Nama Penyewa Buku : ");
    gets(nama);
    printf("Kode Buku [C/K/N] : ");
    scanf(" %c", &kodeBuku);
    printf("Banyak Pinjam : ");
    scanf("%d", &banyakPinjam);

    // Proses tarif dan jumlah bayar
    tarif = Tarif(kodeBuku, jenisBuku);
    jumlahBayar = tarif * banyakPinjam;

    // Tampilan keluaran
    printf("\nTarif Sewa Rp. %d\n", tarif);
    printf("Jenis Buku : %s\n", jenisBuku);
    printf("Penyewa dengan Nama %s\n", nama);
    printf("Jumlah Bayar Penyewaan Sebesar Rp. %d\n", jumlahBayar);

    getch();
    return 0;
}
