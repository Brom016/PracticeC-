#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    // Deklarasi variabel
    char namaSiswa[50];
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;
    float murniKeaktifan, murniTugas, murniUjian, nilaiAkhir;
    char grade;

    // Tampilan input
    cout << "PROGRAM HITUNG NILAI AKHIR\n";
    cout << "Nama Siswa          : ";
    cin.getline(namaSiswa, 50);
    cout << "Nilai Keaktifan     : ";
    cin >> nilaiKeaktifan;
    cout << "Nilai Tugas         : ";
    cin >> nilaiTugas;
    cout << "Nilai Ujian         : ";
    cin >> nilaiUjian;

    // Proses perhitungan
    murniKeaktifan = nilaiKeaktifan * 0.20;
    murniTugas = nilaiTugas * 0.30;
    murniUjian = nilaiUjian * 0.50;
    nilaiAkhir = murniKeaktifan + murniTugas + murniUjian;

    // Menentukan grade
    if (nilaiAkhir > 80)
        grade = 'A';
    else if (nilaiAkhir > 70)
        grade = 'B';
    else if (nilaiAkhir > 56)
        grade = 'C';
    else if (nilaiAkhir > 46)
        grade = 'D';
    else
        grade = 'E';

    // Output
    cout << "\nSiswa yang bernama " << namaSiswa << "\n";
    cout << "Dengan Nilai Persentasi Yang dihasilkan:\n";
    cout << "Nilai Keaktifan * 20%    : " << murniKeaktifan << "\n";
    cout << "Nilai Tugas * 30%        : " << murniTugas << "\n";
    cout << "Nilai Ujian * 50%        : " << murniUjian << "\n";
    cout << "\nJadi Siswa yang bernama " << namaSiswa;
    cout << " memperoleh nilai akhir sebesar " << nilaiAkhir;
    cout << " dengan grade " << grade << "\n";

    getch();
}
