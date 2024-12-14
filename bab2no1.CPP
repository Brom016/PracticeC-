#include <iostream.h>
#include <conio.h>

int main() {
    char nim[15], nama[50];
    float nTugas1, nTugas2, nTugas3, rata2;

    //input
    clrscr();
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nim Siswa      : ";
    cin >> nim;
    cout << "Nama Siswa     : ";
    cin.ignore(); //Menghindari masalah input
    cin.getline(nama, 15); //unutk spasi
    cout << "Nilai Tugas I  : ";
    cin >> nTugas1;
    cout << "Nilai Tugas II : ";
    cin >> nTugas2;
    cout << "Nilai Tugas III: ";
    cin >> nTugas3;

    //Proses Rata-rata dihitung dengan menjumlahkan tiga nilai tugas dengan total tugasnya.
    rata2 = (nTugas1 + nTugas2 + nTugas3) / 3;

    //Output
    clrscr();
    cout << "Nim " << nim << "  Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata2 << " dari hasil tugas yang diikutinya." << endl;

    getch();
}