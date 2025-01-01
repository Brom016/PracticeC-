#include <iostream.h>
#include <conio.h>

int main()
{
    // Deklarasi variabel
    char namaSiswa[50];
    float nilai1, nilai2, nilai3, rataRata;
    int juara;

    // Tampilan input
    clrscr();
    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "================================\n";
    cout << "Nama Siswa            : ";
    cin.getline(namaSiswa, 50);
    cout << "Nilai Pertandingan I  : ";
    cin >> nilai1;
    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    // Menghitung rata-rata
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    // Menentukan juara
    if (rataRata > 80)
        juara = 1;
    else if (rataRata > 75)
        juara = 2;
    else if (rataRata > 65)
        juara = 3;
    else
        juara = 0;

    // Tampilan output
    clrscr();
    cout << "Siswa yang bernama " << namaSiswa << "\n";
    cout << "Memperoleh nilai rata-rata ";
    cout << (float)((int)(rataRata * 100 + 0.5) / 100.0); // Membulatkan hingga 2 desimal

    if (juara > 0)
        cout << " dan menjadi juara ke-" << juara << " dari hasil perlombaan yang diikutinya.";
    else
        cout << " dan tidak menjadi juara dari hasil perlombaan yang diikutinya.";

    getch();
    return 0;
}

