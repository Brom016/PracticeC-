#include <iostream.h>
#include <conio.h>

#define SQUARE(x) ((x) * (x))   // Makro untuk menghitung pangkat dua
#define CUBE(x) ((x) * (x) * (x)) // Makro untuk menghitung pangkat tiga

int main() {
    int number;

    // Input bilangan bulat
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> number;

    // Menggunakan makro untuk menghitung pangkat dua dan pangkat tiga
    int square = SQUARE(number);
    int cube = CUBE(number);

    // Menampilkan hasil
    cout << "Pangkat dua dari " << number << " adalah: " << square << endl;
    cout << "Pangkat tiga dari " << number << " adalah: " << cube << endl;

    // Menunggu input sebelum keluar
    cout << "Tekan sembarang tombol untuk keluar...";
    getch();

    return 0;
}
