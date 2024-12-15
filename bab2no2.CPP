/*
SOAL
Buatlah  program  untuk  menghitung  nilai  akhir  seorang  siswa  dari  kursus
yang diikutinya. Dengan ketentuan sebagai berikut:

    - Nama Siswa, Nilai Keaktifan, Nilai Tugas dan Nilai Ujian diinput. 
    - Proses yang dilakukan untuk mendapatkan nilai murni dari masing-masing nilai,
        adalah  : Nilai Murni Keaktifan = Nilai Keaktifaan dikalikan dengan 20%.
                : Nilai Murni Tugas = Nilai Tugas dikalikan dengan 30%
                : Nilai Murni Ujian = Nilai Ujian dikalikan dengan 50%
                : Nilai Akhir adalah Nilai Murni Keaktifan + Nilai Murni Tugas + Nilai Murni Ujian
*/
#include <iostream.h>
#include <conio.h>

int main() {
    char nama[50];
    float nKeaktifan, nTugas, nUjian;
    float nmKeaktifan, nmTugas, nmUjian, nAkhir;

    //input
    clrscr();
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa         : ";
    cin.getline(nama, 50); //untuk spasi
    cout << "Nilai Keaktifan    : ";
    cin >> nKeaktifan;
    cout << "Nilai Tugas        : ";
    cin >> nTugas;
    cout << "Nilai Ujian        : ";
    cin >> nUjian;

    //Proses
    nmKeaktifan = nKeaktifan * 0.2;
    nmTugas = nTugas * 0.3;
    nmUjian = nUjian * 0.5;
    nAkhir = nmKeaktifan + nmTugas + nmUjian;

    //Output
    clrscr();
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Dengann Nilai Persentasi Yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan \n* 20% : " << nmKeaktifan << endl;
    cout << "Nilai Tugas \n* 30% : " << nmTugas << endl;
    cout << "Nilai Ujian \n* 50% : " << nmUjian << endl;
    cout << "Jadi Siswa yang bernama " << nama << " memperoleh nilai akhir sebesar " << nAkhir << "." << endl;

    getch();
}
