#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    clrscr();

    // tampilan
    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "---------------------" << endl;
    cout << "Kode   Jenis     Harga" << endl;
    cout << "--------------------------" << endl;
    cout << "D      Dada      Rp. 2500" << endl;
    cout << "P      Paha      Rp. 2000" << endl;
    cout << "S      Sayap     Rp. 1500" << endl;
    cout << "--------------------------" << endl;

    int banyakJenis, banyakPotong, totalBayar = 0;
    char kodeJenis;

    // input
    cout << "Banyak Jenis : ";
    cin >> banyakJenis;

    char jenis[10][20];
    int harga[10], jumlah[10], banyak[10];

    for (int i = 0; i < banyakJenis; i++)
    {
        cout << "Jenis Ke - " << (i + 1) << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> kodeJenis;
        cout << "Banyak Potong : ";
        cin >> banyakPotong;

        switch (kodeJenis)
        {
        case 'D':
        case 'd':
            strcpy(jenis[i], "Dada");
            harga[i] = 2500;
            break;
        case 'P':
        case 'p':
            strcpy(jenis[i], "Paha");
            harga[i] = 2000;
            break;
        case 'S':
        case 's':
            strcpy(jenis[i], "Sayap");
            harga[i] = 1500;
            break;
        default:
            cout << "Kode jenis tidak valid! Ulangi input." << endl;
            i--; // repeat input
            continue;
        }
        banyak[i] = banyakPotong;
        jumlah[i] = harga[i] * banyakPotong;
        totalBayar += jumlah[i];
    }

    // counting pajak dan total
    int pajak = totalBayar * 10 / 100;
    int totalBayarAkhir = totalBayar + pajak;

    cout << "=============================================================" << endl;
    // output
    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "No.  Jenis         Harga    Banyak   Jumlah" << endl;
    cout << "     Potong       Satuan     Beli      Harga" << endl;
    cout << "-------------------------------------------------------------" << endl;

    for (int i = 0; i < banyakJenis; i++)
    // format manual printf, memakai setw error
    {
        printf("%-4d %-12s Rp. %-6d %-6d Rp. %-8d\n", (i + 1), jenis[i], harga[i], banyak[i], jumlah[i]);
    }

    cout << "-------------------------------------------------------------" << endl;
    cout << "Jumlah Bayar   Rp. " << totalBayar << endl;
    cout << "Pajak 10%      Rp. " << pajak << endl;
    cout << "Total Bayar    Rp. " << totalBayarAkhir << endl;

    getch();
}
