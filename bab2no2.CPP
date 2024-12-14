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
